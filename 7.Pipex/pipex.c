/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:20:06 by ngriveau          #+#    #+#             */
/*   Updated: 2023/02/01 11:13:33 by ngriveau         ###   ########.fr       */
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

int main(int ac, char **av, char **envp)
{
	t_pip s;
	int i;
	int id1;
	int id2;
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
	id1 = fork();
	if (id1 == 0)
	{
		sleep(1);
		ft_exe_cmd(&s, 1);
		fprintf(stderr, "non pas ici\n\n");
	}
	id2 = fork();
	if (id2 == 0)
		ft_exe_cmd(&s, 2);
	
	wait(&id2);
	wait(&id1);
	fprintf(stderr, "salut les amis\n\n");
	sleep(2);
	return (0);

}