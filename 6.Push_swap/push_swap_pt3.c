/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_pt3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:07:34 by ngriveau          #+#    #+#             */
/*   Updated: 2023/01/30 16:24:10 by ngriveau         ###   ########.fr       */
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

int	ft_alloc(t_swap *s)
{
	s->tab1 = ft_calloc(sizeof(int), s->len + 1);
	if (!s->tab1)
		return (-1);
	s->tab2 = ft_calloc(sizeof(int), s->len + 1);
	if (!s->tab2)
	{
		free(s->tab1);
		return (-1);
	}
	s->filltab1 = ft_calloc(sizeof(int), s->len + 2);
	if (!s->filltab1)
	{
		free(s->tab1);
		free(s->tab2);
		return (-1);
	}
	s->filltab2 = ft_calloc(sizeof(int), s->len + 2);
	if (!s->filltab2)
	{
		free(s->tab1);
		free(s->tab2);
		free(s->filltab1);
		return (-1);
	}
	return (0);
}

void	ft_nbr_ok_to_b(t_swap *s)
{
	if (s->verifrb == 1)
	{
		ft_rb(s, s->printmove);
		s->verifrb = 0;
	}
	ft_pb(s, s->printmove);
	if (s->imin < s->filltab2[0]
		&& s->filltab2[0] <= ((s->len - 1) / 10) * 5)
	{
		s->verifrb = 1;
		s->indeximin++;
	}
	else
		s->indeximax++;
}

void	ft_nbr_ko_to_b(t_swap *s)
{
	if (ft_verif_eff(s, s->imin, s->imax) == 0)
	{
		if (s->verifrb == 1)
		{
			ft_rr(s, s->printmove);
			s->verifrb = 0;
		}
		else
		{
			ft_ra(s, s->printmove);
		}
	}
	else
		ft_rra(s, s->printmove);
}
