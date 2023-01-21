/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasgriveau <nicolasgriveau@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:13:00 by ngriveau          #+#    #+#             */
/*   Updated: 2023/01/21 11:54:08 by nicolasgriv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin_suite(char *s1, char *s2, char *str, int j)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		if (s2[i] == '\n')
			str[j] = ':';
		else
			str[j] = s2[i];
		i++;
		j++;
	}
	str[j] = '\0';
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (s1[i] == '\n')
			str[j] = ':';
		else
			str[j] = s1[i];
		i++;
		j++;
	}
	return (ft_strjoin_suite(s1, s2, str, j));
}
