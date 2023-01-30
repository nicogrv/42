/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_ft_swap_pt1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:11:42 by ngriveau          #+#    #+#             */
/*   Updated: 2023/01/30 17:16:04 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_push_swap.h"

void	ft_ss(t_swap *s, int print)
{
	if (s->filltab1[0] == 0 && s->filltab1[1] == 0)
		return ;
	else
	{
		s->tmp = s->tab1[0];
		s->tab1[0] = s->tab1[1];
		s->tab1[1] = s->tmp;
		s->tmp = s->filltab1[0];
		s->filltab1[0] = s->filltab1[1];
		s->filltab1[1] = s->tmp;
		if (s->filltab2[0] == 0 && s->filltab2[1] == 0)
			return ;
		s->tmp = s->tab2[0];
		s->tab2[0] = s->tab2[1];
		s->tab2[1] = s->tmp;
		s->tmp = s->filltab2[0];
		s->filltab2[0] = s->filltab2[1];
		s->filltab2[1] = s->tmp;
	}
	s->move += 1;
	if (print == 0)
		write(1, "ss\n", 3);
}

void	ft_sa(t_swap *s, int print)
{
	if (s->filltab1[0] == 0 || s->filltab1[1] == 0)
		return ;
	s->tmp = s->tab1[0];
	s->tab1[0] = s->tab1[1];
	s->tab1[1] = s->tmp;
	s->tmp = s->filltab1[0];
	s->filltab1[0] = s->filltab1[1];
	s->filltab1[1] = s->tmp;
	s->move += 1;
	if (print == 0)
		write(1, "sa\n", 3);
}

void	ft_sb(t_swap *s, int print)
{
	if (s->filltab2[0] == 0 || s->filltab2[1] == 0)
		return ;
	s->tmp = s->tab2[0];
	s->tab2[0] = s->tab2[1];
	s->tab2[1] = s->tmp;
	s->tmp = s->filltab2[0];
	s->filltab2[0] = s->filltab2[1];
	s->filltab2[1] = s->tmp;
	s->move += 1;
	if (print == 0)
		write(1, "sb\n", 3);
}

void	ft_pa(t_swap *s, int print)
{
	int	i;

	i = s->len;
	if (s->filltab2[0] == 0)
		return ;
	while (0 <= i && s->filltab1[i] == 0)
		i--;
	i++;
	while (i > 0)
	{
		s->tab1[i] = s->tab1[i - 1];
		s->filltab1[i] = s->filltab1[i - 1];
		i--;
	}
	s->tab1[i] = s->tab2[i];
	s->filltab1[i] = s->filltab2[i];
	while (i < s->len)
	{
		s->tab2[i] = s->tab2[i + 1];
		s->filltab2[i] = s->filltab2[i + 1];
		i++;
	}
	ft_pa_suite(s, print, i);
}

void	ft_pa_suite(t_swap *s, int print, int i)
{
	s->tab2[i] = 0;
	s->filltab2[i] = 0;
	s->move += 1;
	if (print == 0)
		write(1, "pa\n", 3);
}
