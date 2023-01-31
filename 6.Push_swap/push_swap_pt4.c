/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_pt4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:07:34 by ngriveau          #+#    #+#             */
/*   Updated: 2023/01/31 18:07:07 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_a_in_b_bloc(t_swap *s)
{
	while (s->filltab1[0])
	{
		if (s->imin < s->filltab1[0] && s->filltab1[0] <= s->imax)
			ft_nbr_ok_to_b(s);
		else
			ft_nbr_ko_to_b(s);
		if (s->indeximax == s->bloc)
		{
			s->imax += s->bloc;
			s->indeximax = 0;
		}
		if (s->indeximin == s->bloc && s->imax != -s->bloc)
		{
			s->imin -= s->bloc;
			s->indeximin = 0;
		}	
	}
	if (s->verifrb == 1)
	{
		ft_rb(s, s->printmove);
		s->verifrb = 0;
	}
	while (s->filltab1[0] != 0)
		ft_pb(s, s->printmove);
}

int	ft_b_in_a_sort(t_swap *s)
{
	s->imin = s->len -1;
	s->indeximin = 0;
	while (s->filltab2[0] != 0)
	{
		s->i = 0;
		while (s->filltab2[s->i] != s->imin)
			s->i++;
		while (s->filltab2[0] != s->imin)
		{
			if (s->filltab2[0] == s->imin - 1)
				ft_pa(s, s->printmove);
			else if (s->i < s->imin / 2)
				ft_rb(s, s->printmove);
			else
				ft_rrb(s, s->printmove);
		}
		ft_pa(s, s->printmove);
		if (s->filltab1[1] == s->imin - 1)
		{
			ft_sa(s, s->printmove);
			s->imin--;
		}
		s->imin--;
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
	s->verifrb = 0;
	i = -1;
	while (++i < s->len - 1)
		s->tab1[i] = ft_atoi(argv[i + 1]);
	ft_init_fill_tab(s);
	if (ft_verif_arg(argc, argv, s) == -1)
		return (-1);
	if (argc < 3)
		return (0);
	if (s->len == 3)
		return (ft_sort_2(s));
	if (s->len == 4)
		return (ft_sort_3(s));
	if (s->len == 6)
		return (ft_sort_5(s));
	ft_a_in_b_bloc(s);
	ft_b_in_a_sort(s);
	return (0);
}

int	main(int argc, char **argv)
{
	t_swap	s;
	int		exit;

	s.sort = 1;
	exit = ft_push_swap_bloc(argc, argv, &s);
	if (exit == -1)
		write(2, "\e[31mError\e[0m\n", 19);
	free(s.filltab1);
	free(s.filltab2);
	free(s.tab1);
	free(s.tab2);
	return (0);
}
