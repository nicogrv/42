/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasgriveau <nicolasgriveau@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:31:01 by ngriveau          #+#    #+#             */
/*   Updated: 2023/01/21 11:06:37 by nicolasgriv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_ss(t_swap *s, int print)
{
    if (s->filltab1[0] == 0 && s->filltab1[1] == 0)
        return;
	else
	{
    s->tmp = s->tab1[0];
    s->tab1[0] = s->tab1[1];
    s->tab1[1] = s->tmp;
	s->tmp = s->filltab1[0];
    s->filltab1[0] = s->filltab1[1];
    s->filltab1[1] = s->tmp;
	if (s->filltab2[0] == 0 && s->filltab2[1] == 0)
        return;
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

void ft_sa(t_swap *s, int print)
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
	{
		// fprintf(s->fd, "ohoh\n");
    	write(1, "sa\n", 3);
	}
}

void ft_sb(t_swap *s, int print)
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

void ft_pa(t_swap *s, int print)
{
	int i;

	i = s->len;
	if (s->filltab2[0] == 0)
		return ;
	while (0 <= i && s->filltab1[i] == 0 )
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
	s->tab2[i] = 0;
	s->filltab2[i] = 0;
	s->move += 1;
	if (print == 0)
    	write(1, "pa\n", 3);

}

void ft_pb(t_swap *s, int print)
{
	int i;
	i = s->len - 1;
	if (s->filltab1[0] == 0)
		return ;
	while (0 <= i && s->filltab2[i] == 0 )
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
	s->tab1[i] = 0;
	s->filltab1[i] = 0;
	s->move += 1;
    if (print == 0)
    	write(1, "pb\n", 3);
}

void ft_rr(t_swap *s, int print)
{
	ft_ra(s, 42);
	ft_rb(s, 42);
	if (print == 0)
	{
    	write(1, "rr\n", 3);
		s->move += 1;
	}
	
}

void ft_ra(t_swap *s, int print)
{
	int i;
	int lentab;
	int vtab;
	int itab;

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

void ft_rb(t_swap *s, int print)
{
	int i;
	int lentab;
	int vtab;
	int itab;

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

void ft_rra(t_swap *s, int print)
{
	int lentab;
	int vtab;
	int itab;

	lentab = 0;
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

void ft_rrb(t_swap *s, int print)
{
	int lentab;
	int vtab;
	int itab;

	lentab = 0;
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