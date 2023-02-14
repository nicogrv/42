/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_push_swap.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:05:45 by ngriveau          #+#    #+#             */
/*   Updated: 2023/02/14 15:06:01 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_PUSH_SWAP_H
# define BONUS_PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

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
	int		veriferrormalloc;
	int		error;
}	t_swap;

int		ft_atoi(const char *str);
int		ft_isdigit(char *str);
char	*ft_strjoin(char *s1, char *s2);
void	*ft_calloc(size_t nbitems, size_t size);
int		ft_strcmp(char *s1, char *s2);

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
void	ft_rrr(t_swap *s, int print);

void	print_ft_monitoring(t_swap *s);
void	ft_init_fill_tab(t_swap *s);
int		ft_verif_arg(int argc, char **argv, t_swap *s);
int		ft_verif_arg_pt2(int argc, t_swap *s);
int		ft_alloc(t_swap *s);

void	ft_detect_move(t_swap *s, int i);
int		ft_verif_tab(t_swap *s);
int		ft_push_swap(int argc, char **argv, t_swap *s);
int		ft_save_input_move(int argc, char **argv, t_swap *s);
int		main(int argc, char **argv);

int		ft_comparline(char *line);

int		ft_s(char *str, int verif);
char	*ft_my_malloc(char *buffer, char *ligne, int size);
char	*ft_new_line(char *buffer, int size, int fd);
char	*get_next_line(int fd);
char	*ft_dup_upligne(char *upligne, char *buffer, int i, int j);

#endif