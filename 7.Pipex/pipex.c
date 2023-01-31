/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:20:06 by ngriveau          #+#    #+#             */
/*   Updated: 2023/01/31 21:43:49 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int ft_exe_cmd(t_pip *s, int nbcmd)
{
	int i;
	char **cmd;

	// fprintf(stderr, "s->av[%d] = |%s|\n", nbcmd, s->av[nbcmd]);
	cmd = ft_split(s->av[nbcmd], ' ');	
	i = -1;
	// while (cmd[++i])
	// 	fprintf(stderr, "cmd[%d] = |%s|\n", i, cmd[i]);
	i = -1;
	while (s->path[++i])
	{
		execve(ft_strjoin(ft_strjoin(s->path[i], "/"), cmd[0]), cmd, s->env);
	}
	// fprintf(stderr, "marche pas");
}

int main(int ac, char **av, char *envp[])
{
	t_pip s;
	int i;
	int id;

	i = -1;
	s.ac = ac;
	s.av = av;
	s.env = envp;
	s.path = NULL;
	while(s.env[++i])
	{
		if (ft_strncmp(s.env[i], "PATH", 4) == 0)
			s.path = ft_split(&s.env[i][5], ':');
	}
	// i = -1;
	// while (path[++i])
	// 	printf("path = %s\n", path[i]);
	id = fork();
	printf("id = %d\n\n\n", id);
	if (id == 0)
		ft_exe_cmd(&s, 1);
	else
		ft_exe_cmd(&s, 2);
}