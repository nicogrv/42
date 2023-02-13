/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:53:31 by ngriveau          #+#    #+#             */
/*   Updated: 2023/02/13 19:26:54 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	size_t				i;
	unsigned char		*ptr1;
	unsigned char		*ptr2;

	i = 0;
	ptr1 = ((unsigned char *)s1);
	ptr2 = ((unsigned char *)s2);
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
//     char test[] = "bqsub";
//     char cmpp[] = "bq8ouA";
//     int nb = 6;
//     printf("|%d|\n",ft_memcmp(test, cmpp, nb));
//     printf("|%d|",memcmp(test, cmpp, nb));
// }