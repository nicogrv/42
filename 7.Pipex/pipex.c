/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:20:06 by ngriveau          #+#    #+#             */
/*   Updated: 2023/02/13 14:23:59 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void ft_free(t_pip *s)
{
	int i;

	i = -1;
	while (s->path[++i])
		free(s->path[i]);
	free(s->path);
}

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
	char *path2;

	cmd = ft_split(s->av[nbcmd], ' ');
	if (cmd == NULL)
		return (write(2, "\e[32;1mError\n\e[0m", 18), -1);
	i = -1;
	while (s->path[++i])
	{
		
		path = ft_strjoin(s->path[i], "/");
		free(s->path[i]);
		if (path == NULL)
			return (write(2, "\e[31;1mError ft_strjoin 1\n\e[0m", 31), -1);
		path2 = ft_strjoin(path, cmd[0]);
		free(path);
		if (path2 == NULL)
			return (write(2, "\e[31;1mError ft_strjoin 2\n\e[0m", 31), -1);
		if (access(path2, X_OK) == 0)
			execve(path2, cmd, s->env);
		free(path2);
	}
	i = -1;
	write(2, cmd[0], ft_strlen(cmd[0]));
	write(2, ": command not found", 19);
	while (cmd[++i])
		free(cmd[i]);
	free(cmd);
	free(s->path);
	return (-1);
}

int main(int ac, char **av, char **envp)
{
	t_pip s;
	int i;
	int id1;
	int id2;
	int error;
	int fdpip1[2];
	
	i = -1;
	s.ac = ac;
	s.av = av;
	s.env = envp;
	s.path = NULL;
	error = 0;
	if (ac != 5)
		return(write(1, "\e[31;1mError Arguments\n\e[0m", 28));
	s.fdin = open(av[1], O_CREAT | O_RDONLY, 0644);
	if (s.fdin == -1)
		return(write(1, "\e[31;1mError File In\n\e[0m", 26));
	s.fdout = open(av[ac - 1], O_CREAT | O_WRONLY | O_TRUNC, 0777);
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
	id2 = fork();
	if (id2 == 0)
	{
		dup2(fdpip1[0], 0);
		dup2(s.fdout, 1);
		ft_close_fd(&s, fdpip1);
		if (ft_exe_cmd(&s, 3) == -1)
			exit(1);
	}
	waitpid(id2, &error, 0);
	fprintf(stderr, "coucou = %d\n", error);
	ft_close_fd(&s, fdpip1);
	ft_free(&s);
	if (error != 0)
		return (1);
	return (0);
}