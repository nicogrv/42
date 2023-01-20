/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testeur.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasgriveau <nicolasgriveau@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:07:34 by ngriveau          #+#    #+#             */
/*   Updated: 2023/01/20 16:48:35 by nicolasgriv      ###   ########.fr       */
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
	printf("arg = %d\n\n", argc);
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
	while (s->arg[i])
	{
		print_ft_monitoring(s);
		if (s->arg[i] == 'p' && s->arg[i+1] == 'b')
			ft_pb(s, 0);

		while (s->arg[i] != ':' && s->arg[i] != '\0')
			i++;
		if (s->arg[i] == '\0')
			break;
		i++;
		
	}
	return (0);
}

int main(int argc, char **argv)
{
    t_swap s;
    int i;
	int exit;

    i = -1;
    printf("\t\tSTART TESTER\n\n");
    
    char *line;
    line = malloc(sizeof(char) * 10);
    s.arg = malloc(sizeof(char) * 1);
	s.arg[0] = '\0';
	
    while (1)
    {
        line = get_next_line(0);
		if (line == NULL)
			break ;
		s.arg = ft_strjoin(s.arg, line);
		printf("\t%s\n\n", s.arg);
	}
	printf("finito\n");
	// while (1)
	// 	write(1, "\n", 1);
	// write(1, "2", 1);
	// s.fd = fopen("./nbr.txt", "a");
	exit = ft_push_swap(argc, argv, &s);
	// return (0);
	print_ft_monitoring(&s);
	// if (exit == 0)
	// 	printf("\n\nOK\n\n");
	// else if (exit == -1)
	// 	printf("\n\n\n\nERROR ALGO\n\n\n\n");
	// else if (exit == -2)
	// 	printf("\n\n\n\nERROR ARG\n\n\n\n");
	// free(s.filltab1);
	// free(s.filltab2);
	// free(s.tab1);
	// free(s.tab2);
	// fclose(s.fd);
	return (0);
}