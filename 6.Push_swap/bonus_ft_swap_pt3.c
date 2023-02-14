/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_ft_swap_pt3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:11:42 by ngriveau          #+#    #+#             */
/*   Updated: 2023/02/14 14:42:27 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_push_swap.h"

void	ft_rra(t_swap *s, int print)
{
	int	lentab;
	int	vtab;
	int	itab;

	lentab = 0;
	if (s->filltab1[0] == 0)
		return ;
	while (lentab < s->len - 1 && s->filltab1[lentab] != 0)
		lentab++;
	lentab--;
	vtab = s->tab1[lentab];
	itab = s->filltab1[lentab];
	while (lentab > 0)
	{
		s->tab1[lentab] = s->tab1[lentab - 1];
		s->filltab1[lentab] = s->filltab1[lentab - 1];
		lentab--;
	}
	s->tab1[0] = vtab;
	s->filltab1[0] = itab;
	s->move += 1;
	if (print == 0)
		write(1, "rra\n", 4);
}

void	ft_rrb(t_swap *s, int print)
{
	int	lentab;
	int	vtab;
	int	itab;

	lentab = 0;
	if (s->filltab2[0] == 0)
		return ;
	while (lentab < s->len - 1 && s->filltab2[lentab] != 0)
		lentab++;
	lentab--;
	vtab = s->tab2[lentab];
	itab = s->filltab2[lentab];
	while (lentab > 0)
	{
		s->tab2[lentab] = s->tab2[lentab - 1];
		s->filltab2[lentab] = s->filltab2[lentab - 1];
		lentab--;
	}
	s->tab2[0] = vtab;
	s->filltab2[0] = itab;
	s->move += 1;
	if (print == 0)
		write(1, "rrb\n", 4);
}

void	ft_rrr(t_swap *s, int print)
{
	ft_rra(s, 42);
	ft_rrb(s, 42);
	if (print == 0)
	{
		write(1, "rrr\n", 3);
		s->move += 1;
	}
}
