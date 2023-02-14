/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:20:06 by ngriveau          #+#    #+#             */
/*   Updated: 2023/02/14 16:22:27 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_free(t_pip *s)
{
	int	i;

	i = -1;
	while (s->path[++i])
		free(s->path[i]);
	free(s->path);
}

void	ft_close_fd(t_pip *s, int *fdpip1)
{
	close(fdpip1[0]);
	close(fdpip1[1]);
	close(s->fdin);
	close(s->fdout);
}

int	ft_exe_cmd_pt2(t_pip *s, char **cmd)
{
	int		i;
	char	*path;
	char	*path2;

	fprintf(stderr, "coucou = %s\n\n", s->av[3]);
	if (access(s->av[3], X_OK) == 0)
		execve(s->av[3], cmd, s->env);
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
	return (0);
}

int	ft_exe_cmd(t_pip *s, int nbcmd)
{
	int		i;
	char	**cmd;

	cmd = ft_split(s->av[nbcmd], ' ');
	if (cmd == NULL)
		return (write(2, "\e[32;1mError\n\e[0m", 18), -1);
	if (ft_exe_cmd_pt2(s, cmd) == -1)
		return (-1);
	i = -1;
	write(2, cmd[0], ft_strlen(cmd[0]));
	write(2, ": command not found", 19);
	while (cmd[++i])
		free(cmd[i]);
	free(cmd);
	free(s->path);
	return (-1);
}

int	main(int ac, char **av, char **envp)
{
	t_pip	s;
	int		error;

	error = 0;
	s.env = envp;
	if (ft_error_int(&s, ac, av) == -1)
		return (1);
	pipe(s.fdpip1);
	if (ft_1st_cmd(&s) != 0)
		return (1);
	close(s.fdpip1[1]);
	if (strncmp(av[2], "rm", 2) == 0)
		waitpid(s.id1, &error, 0);
	s.fdout = open(av[ac - 1], O_CREAT | O_WRONLY | O_TRUNC, 0777);
	if (s.fdout == -1)
		return (write(1, "\e[31;1mError File Out\n\e[0m", 27));
	if (ft_2nd_cmd(&s) != 0)
		return (1);
	waitpid(s.id2, &error, 0);
	ft_close_fd(&s, s.fdpip1);
	ft_free(&s);
	close(open(av[ac - 1], O_CREAT | O_WRONLY, 0777));
	if (error != 0)
		return (1);
	return (0);
}
