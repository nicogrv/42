/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:41:37 by ngriveau          #+#    #+#             */
/*   Updated: 2023/02/13 19:27:15 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	while (s[i])
		i++;
	str = malloc(sizeof(char) * i + 1);
	str[i] = '\0';
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}

// void main (void)
// {
// 	char * s = ft_strmapi("1234", addOne);
// }