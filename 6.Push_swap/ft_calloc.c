/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:33:14 by ngriveau          #+#    #+#             */
/*   Updated: 2023/01/30 17:33:21 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_push_swap.h"

void	*ft_calloc(size_t nbitems, size_t size)
{
	size_t	count;
	size_t	tmax;
	char	*str;

	tmax = (size_t) -1;
	if (size != 0 && nbitems > (tmax / size))
		return (NULL);
	count = nbitems * size;
	str = malloc(nbitems * size);
	if (str == NULL)
		return (NULL);
	else
	{
		while (count)
		{
			str[count - 1] = '\0';
			count--;
		}
	}
	return (str);
}

// int main(void)
// {
//     char *test;
//     char *ft;
//     size_t i = 0;
//     size_t items = 10;
//     size_t size = 1;
//     size_t count = items * size; 
//     test = calloc(items,size);
//     ft = ft_calloc(items,size);
//     while (count)
//     {
//         printf("|%ld|\t", items);
//         printf("|%c|\t", test[i]);
//         printf("|%c|\n", ft[i]);
//         items--;
//         i++;
//         count--;
//     }
//     free(test);
//     free(ft);
// }