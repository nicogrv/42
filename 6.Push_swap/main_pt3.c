/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_pt3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:07:34 by ngriveau          #+#    #+#             */
/*   Updated: 2023/01/30 15:14:07 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort_5(t_swap *s)
{
	while (1)
	{
		if (s->filltab2[0] == 2 && s->filltab2[1] == 1)
			break ;
		else if (s->filltab2[0] == 1 && s->filltab2[1] == 2)
			ft_sb(s, s->printmove);
		else if (s->filltab1[0] == 1 || s->filltab1[0] == 2)
			ft_pb(s, s->printmove);
		else
			ft_ra(s, s->printmove);
	}
	ft_sort_5_pt2(s);
	return (0);
}

int	ft_sort_5_pt2(t_swap *s)
{
	while (1)
	{
		if (s->filltab1[0] < s->filltab1[1] && s->filltab1[1] < s->filltab1[2])
			break ;
		else if (s->filltab1[0] == 5 && s->filltab1[1] == 3
			&& s->filltab1[2] == 4)
			ft_ra(s, s->printmove);
		else if (s->filltab1[0] == 3 && s->filltab1[1] == 5
			&& s->filltab1[2] == 4)
		{	
			ft_rra(s, s->printmove);
			ft_sa(s, s->printmove);
		}
		else if (s->filltab1[1] < s->filltab1[0])
			ft_sa(s, s->printmove);
		else if (s->filltab1[2] == 3)
			ft_rra(s, s->printmove);
	}
	ft_pa(s, s->printmove);
	ft_pa(s, s->printmove);
	return (0);
}

int	ft_push_swap(int argc, char **argv, t_swap *s)
{
	int	j;
	int	i;
	int	imin;
	int	imax;
	int	nbr;

	s->len = argc;
	s->move = 0;
	s->tab1 = ft_calloc(sizeof(int), s->len + 1);
	s->tab2 = ft_calloc(sizeof(int), s->len + 1);
	s->filltab1 = ft_calloc(sizeof(int), s->len + 2);
	s->filltab2 = ft_calloc(sizeof(int), s->len + 2);
	s->verifrb = 0;
	i = -1;
	while (++i < s->len - 1)
		s->tab1[i] = ft_atoi(argv[i + 1]);
	ft_init_fill_tab(s);
	if (ft_verif_arg(argc, argv, s) == -1)
		return (-2);
	if (s->len == 3)
		return (ft_sort_2(s));
	if (s->len == 4)
		return (ft_sort_3(s));
	if (s->len == 6)
		return (ft_sort_5(s));
	imin = ((s->len - 1) / 10) * 5 - s->bloc;
	imax = ((s->len - 1) / 10) * 5 + s->bloc;
	s->indeximax = 0;
	s->indeximin = 0;
	while (s->filltab1[0])
	{
		if (imin < s->filltab1[0] && s->filltab1[0] <= imax)
		{
			if (s->verifrb == 1)
			{
				ft_rb(s, s->printmove);
				s->verifrb = 0;
			}
			ft_pb(s, s->printmove);
			if (imin < s->filltab2[0]
				&& s->filltab2[0] <= ((s->len - 1) / 10) * 5)
			{
				s->verifrb = 1;
				s->indeximin++;
			}
			else
				s->indeximax++;
		}
		else
		{
			if (ft_verif_eff(s, imin, imax) == 0)
			{
				if (s->verifrb == 1)
				{
					ft_rr(s, s->printmove);
					s->verifrb = 0;
				}
				else
					ft_ra(s, s->printmove);
			}
			else
				ft_rra(s, s->printmove);
		}
		if (s->indeximax == s->bloc)
		{
			imax += s->bloc;
			s->indeximax = 0;
		}
		if (s->indeximin == s->bloc && imax != -s->bloc)
		{
			imin -= s->bloc;
			s->indeximin = 0;
		}	
	}
	if (s->verifrb == 1)
	{
		ft_rb(s, s->printmove);
		s->verifrb = 0;
	}
	while (s->filltab1[0] != 0)
	{
		ft_pb(s, s->printmove);
	}
	imin = s->len -1;
	s->indeximin = 0;
	while (s->filltab2[0] != 0)
	{
		i = 0;
		while (s->filltab2[i] != imin)
			i++;
		while (s->filltab2[0] != imin)
		{
			if (s->filltab2[0] == imin - 1)
			{
				ft_pa(s, s->printmove);
				s->indeximin = 1;
			}
			else
			{
				if (i < imin / 2)
					ft_rb(s, s->printmove);
				else
					ft_rrb(s, s->printmove);
			}
		}
		ft_pa(s, s->printmove);
		if (s->indeximin == 1)
		{
			ft_sa(s, s->printmove);
			imin--;
			s->indeximin = 0;
		}
		imin--;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_swap	s;
	int		i;
	int		exit;

	i = -1;
	exit = ft_push_swap_bloc(argc, argv, &s);
	free(s.filltab1);
	free(s.filltab2);
	free(s.tab1);
	free(s.tab2);
	return (0);
	if (exit == 0)
		printf("\n\nOK\n\n");
	else if (exit == -1)
		printf("\n\n\n\nERROR ALGO\n\n\n\n");
	else if (exit == -2)
		printf("\n\n\n\nERROR ARG\n\n\n\n");
	return (0);
}
