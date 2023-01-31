/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_checker_pt2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:07:34 by ngriveau          #+#    #+#             */
/*   Updated: 2023/01/31 16:13:48 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_push_swap.h"

void	ft_detect_move(t_swap *s, int i)
{
	if (s->arg[i] == 'r' && s->arg[i + 1] == 'r' && s->arg[i + 2] == 'a')
		ft_rra(s, 1);
	else if (s->arg[i] == 'r' && s->arg[i + 1] == 'r'
		&& s->arg[i + 2] == 'b')
		ft_rrb(s, 1);
	else if (s->arg[i] == 'p' && s->arg[i + 1] == 'b')
		ft_pb(s, 1);
	else if (s->arg[i] == 'p' && s->arg[i + 1] == 'a')
		ft_pa(s, 1);
	else if (s->arg[i] == 's' && s->arg[i + 1] == 'a')
		ft_sa(s, 1);
	else if (s->arg[i] == 's' && s->arg[i + 1] == 'b')
		ft_sb(s, 1);
	else if (s->arg[i] == 's' && s->arg[i + 1] == 's')
		ft_ss(s, 1);
	else if (s->arg[i] == 'r' && s->arg[i + 1] == 'r')
		ft_rr(s, 1);
	else if (s->arg[i] == 'r' && s->arg[i + 1] == 'a')
		ft_ra(s, 1);
	else if (s->arg[i] == 'r' && s->arg[i + 1] == 'b')
		ft_rb(s, 1);
	else
		s->error = 1;
}

int	ft_verif_tab(t_swap *s)
{
	int	i;

	i = 0;
	while (i < s->len -1)
	{
		if (s->filltab1[i] != i + 1)
			return (-1);
		else
			i++;
	}
	return (0);
}

int	ft_push_swap(int argc, char **argv, t_swap *s)
{
	int	i;

	s->len = argc;
	s->move = 0;
	if (ft_alloc(s) == -1)
		return (-1);
	i = -1;
	while (++i < s->len - 1)
		s->tab1[i] = ft_atoi(argv[i + 1]);
	ft_init_fill_tab(s);
	if (ft_verif_arg(argc, argv, s) == -1)
		return (-2);
	i = 0;
	while (s->arg[i])
	{
		ft_detect_move(s, i);
		while (s->arg[i] != '\n' && s->arg[i] != '\0')
			i++;
		if (s->arg[i] == '\0')
			break ;
		i++;
	}
	return (ft_verif_tab(s));
}

void	ft_save_input_move(t_swap *s)
{
	char	*line;

	s->arg = malloc(sizeof(char) * 1);
	s->arg[0] = '\0';
	while (1)
	{
		line = get_next_line(0);
		if (line == NULL)
			break ;
		s->arg = ft_strjoin(s->arg, line);
		free(line);
	}
}

int	main(int argc, char **argv)
{
	t_swap	s;
	int		exit;

	s.error = 0;
	if (argc == 1 || argc == 2)
	{
		write(1, "OK\n", 3);
		return (0);
	}
	ft_save_input_move(&s);
	exit = ft_push_swap(argc, argv, &s);
	if (s.error == 1)
		write(1, "error", 5);
	else if (exit == 0)
		write(1, "\e[30;42mOK\e[0m\n", 15);
	else
		write(1, "\e[30;41mKO\e[0m\n", 15);
	free(s.filltab1);
	free(s.filltab2);
	free(s.tab1);
	free(s.tab2);
	free(s.arg);
	return (0);
}
