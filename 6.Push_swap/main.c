/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasgriveau <nicolasgriveau@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:07:34 by ngriveau          #+#    #+#             */
/*   Updated: 2023/01/24 17:38:07 by nicolasgriv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	ft_len_tab1(t_swap *s)
{
	int i;

	i = 0;
	while (i < s->len -1&& s->filltab1[i] != 0)
		i++;
	// printf("i = %d\n", i);
	return (i);
}

int ft_max_in_a(t_swap *s)
{
	int i;
	int max;

	i = 0;
	max = 0;
	while (s->filltab1[i] != 0)
	{	
		if (max < s->filltab1[i])
			max = s->filltab1[i];
		i++;
	}
	// printf("max = %d", max);
	return (max);
}

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

int	ft_verif_eff(t_swap *s, int imin, int imax)
{
	int i;

	i = 0; 
	while (1)
	{
		// printf("i = %d\n", i);
		// printf("\nrr tab[%d] = %d\n", i ,s->filltab1[i]);
		if (imin < s->filltab1[i] && s->filltab1[i] <= imax)
		{
			// printf("\nSORTTTTT RR tab[%d] = %d\n", i ,s->filltab1[i]);
			return (0);
		}
		// printf("\nrra tab[%d] = %d\n", (ft_len_tab1(s) - 1) -  i ,s->filltab1[(ft_len_tab1(s) - 1) -  i]);
		// if ( imin < s->filltab1[(ft_len_tab1(s) - 1) -  i] && s->filltab1[(ft_len_tab1(s) - 1) -  i] <= imax)
		// {
		// 	// printf("\nSORTTTTT RRRRRRRRRRRRRtab[%d] = %d\n", (ft_len_tab1(s) - 1) -  i ,s->filltab1[(ft_len_tab1(s) - 1) -  i]);
		// 	return (1);
		// }
		i++;
	}
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
int ft_push_swap_suite(int argc, char **argv, t_swap *s);

int ft_push_swap(int argc, char **argv, t_swap *s)
{
	s->bloc = 1;
	s->bestblock = 100000;
	s->printmove = 1;
	while (s->bloc < 40)
	{
		ft_push_swap_suite(argc, argv, s);
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
	ft_push_swap_suite(argc, argv, s);
	// ft_sa(s, s->printmove);
	return (1);
}

int ft_sort_2(t_swap *s)
{
	if (s->filltab1[1] < s->filltab1[0])
		ft_sa(s, s->printmove);
	return (0);
}
int ft_sort_3(t_swap *s)
{
	// printf("\n\n\n");
	while (1)
	{
		// print_ft_monitoring(s);
		if (s->filltab1[0] < s->filltab1[1] && s->filltab1[1] < s->filltab1[2])
			break ;
		else if (s->filltab1[0] == 3 && s->filltab1[1] == 1 && s->filltab1[2] == 2)
			ft_ra(s, s->printmove);
		else if (s->filltab1[0] == 1 && s->filltab1[1] == 3 && s->filltab1[2] == 2)
		{	
			ft_rra(s, s->printmove);
			ft_sa(s, s->printmove);
		}
		else if (s->filltab1[1] < s->filltab1[0])
			ft_sa(s, s->printmove);
		else if (s->filltab1[2] == 1 )
			ft_rra(s, s->printmove);
	}
	return (0);
}

int ft_sort_5(t_swap *s)
{
	while (1)
	{
		// print_ft_monitoring(s);
		if (s->filltab2[0] == 2 && s->filltab2[1] == 1)
			break ;
		else if (s->filltab2[0] == 1 && s->filltab2[1] == 2)
			ft_sb(s, s->printmove);
		else if (s->filltab1[0] == 1 || s->filltab1[0] == 2)
			ft_pb(s, s->printmove);
		else
			ft_ra(s, s->printmove);
		
	}
	while (1)
	{
		// print_ft_monitoring(s);
		if (s->filltab1[0] < s->filltab1[1] && s->filltab1[1] < s->filltab1[2])
			break ;
		else if (s->filltab1[0] == 5 && s->filltab1[1] == 3 && s->filltab1[2] == 4)
			ft_ra(s, s->printmove);
		else if (s->filltab1[0] == 3 && s->filltab1[1] == 5 && s->filltab1[2] == 4)
		{	
			ft_rra(s, s->printmove);
			ft_sa(s, s->printmove);
		}
		else if (s->filltab1[1] < s->filltab1[0])
			ft_sa(s, s->printmove);
		else if (s->filltab1[2] == 3 )
			ft_rra(s, s->printmove);
	}
	ft_pa(s, s->printmove);
	ft_pa(s, s->printmove);
	// print_ft_monitoring(s);
	return (0);
}


int ft_push_swap_suite(int argc, char **argv, t_swap *s)
{
	int j;
	int i;
	int imin;
	int indeximin;
	int imax;
	int indeximax;
	int nbr;
    
    s->len = argc;
	s->move = 0;
    s->tab1 = calloc(sizeof(int) , s->len + 1);
    s->tab2 = calloc(sizeof(int) , s->len + 1);
    s->filltab1 = calloc(sizeof(int) , s->len + 2);
    s->filltab2 = calloc(sizeof(int) , s->len + 2);
	s->verifrb = 0;
    i = -1;
    while (++i < s->len - 1)
		s->tab1[i] = ft_atoi(argv[i + 1]);
	ft_init_fill_tab(s);
	if (ft_verif_arg(argc, argv, s) == -1)
		return (-2);
	if (s->len == 3)
		return (ft_sort_2(s));
	if (s->len == 4)
		return (ft_sort_3(s));
	if (s->len == 6)
		return (ft_sort_5(s));
	imin = ((s->len-1) / 10) *5 - s->bloc;
	imax = ((s->len-1) / 10) *5 + s->bloc;	
	indeximax = 0;
	indeximin = 0;
	while (s->filltab1[0])
	{
		if(imin < s->filltab1[0] && s->filltab1[0] <= imax)
		{
			if (s->verifrb == 1)
			{
				ft_rb(s, s->printmove);
				s->verifrb = 0;
			}
			// printf("push b\n");
			ft_pb(s, s->printmove);
			if (imin < s->filltab2[0] && s->filltab2[0] <= ((s->len-1) / 10) *5)
			{
				s->verifrb = 1;
				indeximin++;
			}
			else
				indeximax++;
				
		}
		else
		{
			if (ft_verif_eff(s, imin, imax) == 0)
			{
				// printf("\tra\n\n");
				if (s->verifrb == 1)	
				{
					// FILE * fd = fopen("./nbr.txt", "a");
					// fprintf(fd, "rr\n");
					// fclose(fd);
					ft_rr(s, s->printmove);
					s->verifrb = 0;
				}
				else
					ft_ra(s, s->printmove);
			}
			else
			{
				// printf("\trra\n\n");
				ft_rra(s, s->printmove);
			}
		}
		if (indeximax == s->bloc)
		{
			imax += s->bloc;
			indeximax = 0;
		}
		if (indeximin == s->bloc && imax != -s->bloc)
		{
			imin -= s->bloc;
			indeximin = 0;
		}	
	}
	// printf("fin\n");
	if (s->verifrb == 1)	
	{
		ft_rb(s, s->printmove);
		s->verifrb = 0;
	}
	while (s->filltab1[0] != 0)
	{
		ft_pb(s, s->printmove);
	}
	// print_ft_monitoring(s);
	// printf("ici\n");
	imin = s->len-1;
	// printf("imin = %d\n", imin);
	indeximin = 0;
	while (s->filltab2[0] != 0)
	{
		// print_ft_monitoring(s);
		i = 0;
		while (s->filltab2[i] != imin )
		{
			// printf("coucou");
			i++;
		}
		while (s->filltab2[0] != imin)
		{
			// print_ft_monitoring(s);
			if (s->filltab2[0] == imin - 1)
			{
				ft_pa(s, s->printmove);
				indeximin = 1;
			}
			else
			{
				
				if (i < imin / 2)
					ft_rb(s, s->printmove);
				else
					ft_rrb(s, s->printmove);
			}
		}
		ft_pa(s, s->printmove);
		if (indeximin == 1)
		{
			ft_sa(s, s->printmove);
			imin--;
			indeximin = 0;
		}
		imin--;
	}
	return (0);
}

int main(int argc, char **argv)
{
    t_swap s;
    int i;
	int exit;

    i = -1;
	
	// while (1)
	// 	write(1, "\n", 1);
	// write(1, "2", 1);
	// s.fd = fopen("./nbr.txt", "a");
	exit = ft_push_swap(argc, argv, &s);
	// print_ft_monitoring(&s);
	free(s.filltab1);
	free(s.filltab2);
	free(s.tab1);
	free(s.tab2);
	return (0);
	if (exit == 0)
		printf("\n\nOK\n\n");
	else if (exit == -1)
		printf("\n\n\n\nERROR ALGO\n\n\n\n");
	else if (exit == -2)
		printf("\n\n\n\nERROR ARG\n\n\n\n");
	// fclose(s.fd);
	return (0);
}



//42 73 38 1 62 97 60 66 75 47 56 36 84 92 88 95 40 89 29 6 31 44 58 27 3 28 20 64 39 43 23 79 19 32 16 72 100 54 10 50 17 98 48 99 63 24 71 69 53 9 67 59 4 12 87 13 82 22 96 45 15 14 55 41 34 5 37 7 25 85 76 90 70 68 11 46 81 35 18 30 33 91 86 77 61 2 57 52 83 94 8 93 78 80 26 49 21 74 65 51