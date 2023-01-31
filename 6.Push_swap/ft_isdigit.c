/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:21:17 by ngriveau          #+#    #+#             */
/*   Updated: 2023/01/31 13:46:17 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(char *str)
{	
	int i;
	int nbr;

	i = 0;
	nbr = 0;
	fprintf(stderr, "str = |%s|\n", str);
	while (str[i] != '\0')
	{
		printf("\tlettre = |%c|\n", str[i]);
		if (str[i] == '-' || str[i] == '+')
		{
			if (i != 0)
				return (-1);
		}
		else if (('0' <= str[i] && str[i] <= '9'))
			nbr = 1;
		else
			return (-1);
		i++;
	}
	if(nbr == 1)
		return (0);
	fprintf(stderr, "out = %d\n", nbr);
	return (-1);
}
