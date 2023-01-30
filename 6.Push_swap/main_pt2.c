/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_pt2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:07:34 by ngriveau          #+#    #+#             */
/*   Updated: 2023/01/30 16:03:58 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_verif_arg(int argc, char **argv, t_swap *s)
{
	int	i;
	int	j;

	i = 1;
	if (argc < 3)
		return (-1);
	while (argv[i] != NULL)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (ft_isdigit(argv[i][j]) == -1)
				return (-1);
			j++;
		}
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
	s->imin = ((s->len - 1) / 10) * 5 - s->bloc;
	s->imax = ((s->len - 1) / 10) * 5 + s->bloc;
	s->indeximax = 0;
	s->indeximin = 0;
	return (0);
}

int	ft_push_swap_bloc(int argc, char **argv, t_swap *s)
{
	s->bloc = 1;
	s->bestblock = 100000;
	s->printmove = 1;
	while (s->bloc < 40)
	{
		ft_push_swap(argc, argv, s);
		if (s->move < s->bestblock)
		{
				s->bestblock = s->move;
				s->besttaillebloc = s->bloc;
		}
		s->bloc++;
		free(s->filltab1);
		free(s->filltab2);
		free(s->tab1);
		free(s->tab2);
	}
	s->bloc = s->besttaillebloc;
	s->printmove = 0;
	ft_push_swap(argc, argv, s);
	return (1);
}

int	ft_sort_2(t_swap *s)
{
	if (s->filltab1[1] < s->filltab1[0])
		ft_sa(s, s->printmove);
	return (0);
}

int	ft_sort_3(t_swap *s)
{
	while (1)
	{
		if (s->filltab1[0] < s->filltab1[1] && s->filltab1[1] < s->filltab1[2])
			break ;
		else if (s->filltab1[0] == 3 && s->filltab1[1] == 1
			&& s->filltab1[2] == 2)
			ft_ra(s, s->printmove);
		else if (s->filltab1[0] == 1 && s->filltab1[1] == 3
			&& s->filltab1[2] == 2)
		{	
			ft_rra(s, s->printmove);
			ft_sa(s, s->printmove);
		}
		else if (s->filltab1[1] < s->filltab1[0])
			ft_sa(s, s->printmove);
		else if (s->filltab1[2] == 1)
			ft_rra(s, s->printmove);
	}
	return (0);
}
