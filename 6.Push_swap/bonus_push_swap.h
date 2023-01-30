/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_push_swap.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:05:45 by ngriveau          #+#    #+#             */
/*   Updated: 2023/01/30 17:15:09 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef push_swap_bonus.h
# define push_swap_bonus.h

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "get_next_line.h"

typedef struct s_swap
{
    char	*arg;
    int		bloc;
    int		bestblock;
    int		besttaillebloc;
    int		printmove;
	int		tmp;
	int		len;
	int		move;
    int		*tab1;
    int		*filltab1;
    int		*tab2;
    int		*filltab2;
    int		verifsens;
    int		verifsensnbr;
    int		verifrb;
}	t_swap;

int		ft_atoi(const char *str);
int		ft_isdigit(char str);
char	*ft_strjoin(char *s1, char *s2);
void	*ft_calloc(size_t nbitems, size_t size);


void	ft_sa(t_swap *s, int print);
void	ft_sb(t_swap *s, int print);
void	ft_ss(t_swap *s, int print);


void	ft_pa(t_swap *s, int print);
void	ft_pa_suite(t_swap *s, int print, int i);
void	ft_pb(t_swap *s, int print);
void	ft_pb_suite(t_swap *s, int print, int i);

void	ft_rr(t_swap *s, int print);
void	ft_ra(t_swap *s, int rr);
void	ft_rb(t_swap *s, int rr);

void	ft_rra(t_swap *s, int print);
void	ft_rrb(t_swap *s, int print);

#endif