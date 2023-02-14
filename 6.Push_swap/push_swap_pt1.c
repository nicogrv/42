/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_pt1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:07:34 by ngriveau          #+#    #+#             */
/*   Updated: 2023/01/31 19:09:30 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_len_tab1(t_swap *s)
{
	int	i;

	i = 0;
	while (i < s->len - 1 && s->filltab1[i] != 0)
		i++;
	return (i);
}

int	ft_max_in_a(t_swap *s)
{
	int	i;
	int	max;

	i = 0;
	max = 0;
	while (s->filltab1[i] != 0)
	{	
		if (max < s->filltab1[i])
			max = s->filltab1[i];
		i++;
	}
	return (max);
}

void	print_ft_monitoring(t_swap *s)
{
	(void) s;
}
	// int	j;

	// j = -1;
	// while (++j < s->len - 1)
	// {
	// 	j++;
	// 	j--;
	// 	printf("%d\t", s->tab1[j]);
	// 	printf("%d\t", s->filltab1[j]);
	// 	printf("|\t" );
	// 	printf("%d\t", s->tab2[j]);
	// 	printf("%d\n", s->filltab2[j]);
	// }
	// printf("coups: %d\n", s->move);

int	ft_verif_eff(t_swap *s, int imin, int imax)
{
	int	i;

	i = 0;
	while (1)
	{
		if (imin < s->filltab1[i] && s->filltab1[i] <= imax)
			return (0);
		i++;
	}
}

void	ft_init_fill_tab(t_swap *s)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	while (++i < s->len - 1)
	{
		j = 0;
		k = 1;
		while (j < s->len - 1)
		{
			if (s->tab1[j] < s->tab1[i])
				k++;
			j++;
		}
		s->filltab1[i] = k;
	}
	i = -1;
	while (++i < s->len - 1)
		s->filltab2[i] = 0;
}
