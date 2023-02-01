/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:20:06 by ngriveau          #+#    #+#             */
/*   Updated: 2023/02/01 18:19:24 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void ft_close_fd(t_pip *s, int *fdpip1)
{
		close(fdpip1[0]);
		close(fdpip1[1]);
		close(s->fdin);
		close(s->fdout);
}

int ft_exe_cmd(t_pip *s, int nbcmd)
{
	int i;
	char **cmd;
	char *path;

	cmd = ft_split(s->av[nbcmd], ' ');
	if (cmd == NULL)
		return (write(2, "\e[32;1mError\n\e[0m", 18), -1);
	i = -1;
	while (s->path[++i])
	{
		path = ft_strjoin(s->path[i], "/");
		if (path == NULL)
			return (write(2, "\e[31;1mError ft_strjoin 1\n\e[0m", 31), -1);
		path = ft_strjoin(path, cmd[0]);
		if (path == NULL)
			return (write(2, "\e[31;1mError ft_strjoin 2\n\e[0m", 31), -1);
		execve(path, cmd, s->env);
	}
	return (perror("\e[31;1mError\e[0m"), -1);
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
	if (ac != 5)
		return(write(1, "\e[31;1mError Arguments\n\e[0m", 28));
	s.fdin = open(av[1], O_CREAT, 0644 | O_RDONLY );
	if (s.fdin == -1)
		return(write(1, "\e[31;1mError File In\n\e[0m", 26));
	s.fdout = open(av[ac - 1], O_CREAT, 0777 | O_WRONLY);
	if (s.fdout == -1)
		return(write(1, "\e[31;1mError File Out\n\e[0m", 27));

	while(s.env[++i])
	{
		if (ft_strncmp(s.env[i], "PATH", 4) == 0)
			s.path = ft_split(&s.env[i][5], ':');
	}
	
	pipe(fdpip1);
	id1 = fork();
	if (id1 == 0)
	{
		dup2(s.fdin, 0);
		dup2(fdpip1[1], 1);
		ft_close_fd(&s, fdpip1);
		if (ft_exe_cmd(&s, 2) == -1)
			exit(1);
	}
	close(fdpip1[1]);
	id1 = fork();
	if (id1 == 0)
	{
		dup2(fdpip1[0], 0);
		dup2(s.fdout, 1);
		ft_close_fd(&s, fdpip1);
		if (ft_exe_cmd(&s, 3) == -1)
			exit(1);
	}
	ft_close_fd(&s, fdpip1);
	return (0);
}