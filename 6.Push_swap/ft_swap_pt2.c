/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_pt2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:31:01 by ngriveau          #+#    #+#             */
/*   Updated: 2023/01/30 14:34:00 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_swap *s, int print)
{
	int	i;

	i = s->len - 1;
	if (s->filltab1[0] == 0)
		return ;
	while (0 <= i && s->filltab2[i] == 0)
		i--;
	i++;
	while (i > 0)
	{
		s->tab2[i] = s->tab2[i - 1];
		s->filltab2[i] = s->filltab2[i - 1];
		i--;
	}
	s->tab2[i] = s->tab1[i];
	s->filltab2[i] = s->filltab1[i];
	while (i < s->len)
	{
		s->tab1[i] = s->tab1[i + 1];
		s->filltab1[i] = s->filltab1[i + 1];
		i++;
	}
	ft_pb_suite(s, print, i);
}

void	ft_pb_suite(t_swap *s, int print, int i)
{
	s->tab1[i] = 0;
	s->filltab1[i] = 0;
	s->move += 1;
	if (print == 0)
		write(1, "pb\n", 3);
}

void	ft_rr(t_swap *s, int print)
{
	ft_ra(s, 42);
	ft_rb(s, 42);
	if (print == 0)
	{
		write(1, "rr\n", 3);
		s->move += 1;
	}
}

void	ft_ra(t_swap *s, int print)
{
	int	i;
	int	lentab;
	int	vtab;
	int	itab;

	i = 0;
	lentab = 0;
	while (lentab < s->len - 1 && s->filltab1[lentab] != 0)
		lentab++;
	lentab--;
	vtab = s->tab1[i];
	itab = s->filltab1[i];
	while (i < lentab)
	{
		s->tab1[i] = s->tab1[i + 1];
		s->filltab1[i] = s->filltab1[i + 1];
		i++;
	}
	s->tab1[i] = vtab;
	s->filltab1[i] = itab;
	s->move += 1;
	if (print == 0)
		write(1, "ra\n", 3);
}

void	ft_rb(t_swap *s, int print)
{
	int	i;
	int	lentab;
	int	vtab;
	int	itab;

	i = 0;
	lentab = 0;
	while (lentab < s->len - 1 && s->filltab2[lentab] != 0)
		lentab++;
	lentab--;
	vtab = s->tab2[i];
	itab = s->filltab2[i];
	while (i < lentab)
	{
		s->tab2[i] = s->tab2[i + 1];
		s->filltab2[i] = s->filltab2[i + 1];
		i++;
	}
	s->tab2[i] = vtab;
	s->filltab2[i] = itab;
	s->move += 1;
	if (print == 0)
		write(1, "rb\n", 3);
}
