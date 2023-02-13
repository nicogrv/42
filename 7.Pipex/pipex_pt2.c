/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_pt2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:57:46 by ngriveau          #+#    #+#             */
/*   Updated: 2023/02/13 20:04:24 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	ft_error_int(t_pip *s, int ac, char **av)
{
	s->i = -1;
	s->ac = ac;
	s->av = av;
	s->path = NULL;
	if (ac != 5)
		return (write(1, "\e[31;1mError Arguments\n\e[0m", 28), -1);
	s->fdin = open(av[1], O_CREAT | O_RDONLY, 0644);
	if (s->fdin == -1)
		return (write(1, "\e[31;1mError File In\n\e[0m", 26), -1);
	s->fdout = open(av[ac - 1], O_CREAT | O_WRONLY | O_TRUNC, 0777);
	if (s->fdout == -1)
		return (write(1, "\e[31;1mError File Out\n\e[0m", 27), -1);
	while (s->env[++s->i])
	{
		if (ft_strncmp(s->env[s->i], "PATH", 4) == 0)
			s->path = ft_split(&s->env[s->i][5], ':');
	}
	return (0);
}

int	ft_1st_cmd(t_pip *s)
{
	s->id1 = fork();
	if (s->id1 == 0)
	{
		dup2(s->fdin, 0);
		dup2(s->fdpip1[1], 1);
		ft_close_fd(s, s->fdpip1);
		if (ft_exe_cmd(s, 2) == -1)
			exit(1);
	}
	close(s->fdout);
	return (0);
}

int	ft_2nd_cmd(t_pip *s)
{
	s->id2 = fork();
	if (s->id2 == 0)
	{
		dup2(s->fdpip1[0], 0);
		dup2(s->fdout, 1);
		ft_close_fd(s, s->fdpip1);
		if (ft_exe_cmd(s, 3) == -1)
			exit(1);
	}
	return (0);
}
