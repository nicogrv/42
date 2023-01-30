/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testeur.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasgriveau <nicolasgriveau@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:07:34 by ngriveau          #+#    #+#             */
/*   Updated: 2023/01/24 17:19:31 by nicolasgriv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"


void print_ft_monitoring(t_swap *s)
{
	int j;

	j = -1;

	// return ;
	while (++j < s->len - 1)
	{
		printf("%d\t", s->tab1[j]);
		printf("%d\t", s->filltab1[j]);
		printf("|\t" );
		printf("%d\t", s->tab2[j]);
		printf("%d\n", s->filltab2[j]);
	}
	printf("coups: %d\n", s->move);
}

void ft_init_fill_tab(t_swap *s)
{
	int i;
	int value;
	int j;
	int k;
	
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


int ft_verif_arg(int argc, char **argv, t_swap *s)
{
	int i;
	int j;

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



int ft_push_swap(int argc, char **argv, t_swap *s)
{
	int i;
    
    s->len = argc;
	s->move = 0;
    s->tab1 = calloc(sizeof(int) , s->len + 1);
    s->tab2 = calloc(sizeof(int) , s->len + 1);
    s->filltab1 = calloc(sizeof(int) , s->len + 2);
    s->filltab2 = calloc(sizeof(int) , s->len + 2);
    i = -1;
    while (++i < s->len - 1)
		s->tab1[i] = ft_atoi(argv[i + 1]);
	ft_init_fill_tab(s);
	if (ft_verif_arg(argc, argv, s) == -1)
		return (-2);
	i = 0;
	// printf()
	while (s->arg[i])
	{
		if (s->arg[i] == 'r' && s->arg[i+1] == 'r' && s->arg[i+2] == 'a')
			ft_rra(s, 1);
		else if (s->arg[i] == 'r' && s->arg[i+1] == 'r' && s->arg[i+2] == 'b')
			ft_rrb(s, 1);
		else if (s->arg[i] == 'p' && s->arg[i+1] == 'b')
			ft_pb(s, 1);
		else if (s->arg[i] == 'p' && s->arg[i+1] == 'a')
			ft_pa(s, 1);
		else if (s->arg[i] == 's' && s->arg[i+1] == 'a')
			ft_sa(s, 1);
		else if (s->arg[i] == 's' && s->arg[i+1] == 'b')
			ft_sb(s, 1);
		else if (s->arg[i] == 's' && s->arg[i+1] == 's')
			ft_ss(s, 1);
		else if (s->arg[i] == 'r' && s->arg[i+1] == 'r')
			ft_rr(s, 1);
		else if (s->arg[i] == 'r' && s->arg[i+1] == 'a')
			ft_ra(s, 1);
		else if (s->arg[i] == 'r' && s->arg[i+1] == 'b')
			ft_rb(s, 1);
		while (s->arg[i] != '\n' && s->arg[i] != '\0')
			i++;
		if (s->arg[i] == '\0')
			break;
		i++;
	}
	i = 0;
	// print_ft_monitoring(s);
	while (i < s->len -1)
	{
		if (s->filltab1[i] != i + 1)
			return (-1);
		else
			i++;	
	}
	return (0);
}

int main(int argc, char **argv)
{
    t_swap	s;
    int		i;
	int		exit;
    char	*line;

    i = -1;
	if (argc == 1 || argc == 2)
	{
		write(1, "OK\n", 3);
		return (0);
	}
	line = malloc(sizeof(char) * 10);
	line[9] = '\0';
    s.arg = malloc(sizeof(char) * 1);
	line[0] = '\0';
	while (1)
    {
        line = get_next_line(0);
		if (line == NULL)
			break ;
		s.arg = ft_strjoin(s.arg, line);
		free(line);
		i++;
	}
		// printf("\t|%s|\n\n", s.arg);
	// fprintf(stderr, "|%s|\n\n\n", s.arg);
	exit = ft_push_swap(argc, argv, &s);
	if (exit == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	// free(s.filltab1);
	// free(s.filltab2);
	// free(s.tab1);
	// free(s.tab2);
	// print_ft_monitoring(&s);
	return (0);
}