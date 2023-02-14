/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_checker_pt1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:07:34 by ngriveau          #+#    #+#             */
/*   Updated: 2023/02/14 15:16:58 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_push_swap.h"

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

int	ft_verif_arg(int argc, char **argv, t_swap *s)
{
	int	i;

	i = 1;
	while (argv[i] != NULL)
	{
		if (ft_isdigit(argv[i]) == -1)
			return (-1);
		i++;
	}
	return (ft_verif_arg_pt2(argc, s));
}

int	ft_verif_arg_pt2(int argc, t_swap *s)
{
	int	i;
	int	j;

	i = 1;
	while (i != argc - 1)
	{
		j = i + 1;
		while (j != argc - 1)
		{
			if (s->tab1[i] == s->tab1[j])
				return (-1);
			j++;
		}
		i++;
	}
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
