/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:20:06 by ngriveau          #+#    #+#             */
/*   Updated: 2023/02/01 14:56:38 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int ft_exe_cmd(t_pip *s, int nbcmd)
{
	int i;
	char **cmd;

	cmd = ft_split(s->av[nbcmd], ' ');
	i = -1;
	while (s->path[++i])
		execve(ft_strjoin(ft_strjoin(s->path[i], "/"), cmd[0]), cmd, s->env);
	return (0);
}

int main(int ac, char **av, char **envp)
{
	t_pip s;
	int i;
	int id1;
	int fdpip1[2];
	
	i = -1;
	s.ac = ac;
	s.av = av;
	s.env = envp;
	s.path = NULL;
	s.fdin = open(av[1], O_RDONLY);
	if (s.fdin == -1)
		return(write(1, "Error File In\n", 14));
	s.fdout = open(av[ac - 1], O_WRONLY);
	if (s.fdin == -1)
		return(write(1, "Error File Out\n", 15));

	while(s.env[++i])
	{
		if (ft_strncmp(s.env[i], "PATH", 4) == 0)
			s.path = ft_split(&s.env[i][5], ':');
	}

	pipe(fdpip1);
	id1 = fork();
	if (id1 == 0)
	{
		close(fdpip1[0]);
		dup2(s.fdin, 0);
		dup2(fdpip1[1], 1);
		if (ft_exe_cmd(&s, 2) == -1)
			return (close(fdpip1[1]));
	}
	close(fdpip1[1]);
	id1 = fork();
	if (id1 == 0)
	{
		dup2(fdpip1[0], 0);
		dup2(s.fdout, 1);
		ft_exe_cmd(&s, 3);
	}
	return (0);
}