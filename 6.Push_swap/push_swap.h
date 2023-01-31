/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:23:25 by ngriveau          #+#    #+#             */
/*   Updated: 2023/01/31 14:47:15 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_swap
{
	int	bloc;
	int	bestblock;
	int	besttaillebloc;
	int	printmove;
	int	tmp;
	int	len;
	int	move;
	int	*tab1;
	int	*filltab1;
	int	*tab2;
	int	*filltab2;
	int	verifsens;
	int	verifsensnbr;
	int	verifrb;

	int	indeximax;
	int	indeximin;
	int	imin;
	int	imax;
	int	i;
	int	sort;

}	t_swap;

int		ft_atoi(const char *str);
int		ft_isdigit(char *str);
void	*ft_calloc(size_t nbitems, size_t size);

int		ft_len_tab1(t_swap *s);
int		ft_max_in_a(t_swap *s);
void	print_ft_monitoring(t_swap *s);
int		ft_verif_eff(t_swap *s, int imin, int imax);
void	ft_init_fill_tab(t_swap *s);

int		ft_verif_arg(int argc, char **argv, t_swap *s);
int		ft_verif_arg_pt2(int argc, t_swap *s);
int		ft_push_swap_bloc(int argc, char **argv, t_swap *s);
int		ft_sort_2(t_swap *s);
int		ft_sort_3(t_swap *s);

int		ft_sort_5(t_swap *s);
int		ft_sort_5_pt2(t_swap *s);
int		ft_alloc(t_swap *s);
void	ft_nbr_ok_to_b(t_swap *s);
void	ft_nbr_ko_to_b(t_swap *s);

void	ft_a_in_b_bloc(t_swap *s);
int		ft_b_in_a_sort(t_swap *s);
int		ft_push_swap(int argc, char **argv, t_swap *s);
int		main(int argc, char **argv);

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