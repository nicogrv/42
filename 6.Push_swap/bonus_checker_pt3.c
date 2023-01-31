/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_checker_pt3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:50:28 by ngriveau          #+#    #+#             */
/*   Updated: 2023/01/31 17:36:47 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_push_swap.h"

int	ft_comparline(char *line)
{
	if (ft_strcmp(line, "rra\n") == 0)
		return (0);
	else if (ft_strcmp(line, "rrb\n") == 0)
		return (0);
	else if (ft_strcmp(line, "rrr\n") == 0)
		return (0);
	else if (ft_strcmp(line, "pb\n") == 0)
		return (0);
	else if (ft_strcmp(line, "pa\n") == 0)
		return (0);
	else if (ft_strcmp(line, "sa\n") == 0)
		return (0);
	else if (ft_strcmp(line, "sb\n") == 0)
		return (0);
	else if (ft_strcmp(line, "ss\n") == 0)
		return (0);
	else if (ft_strcmp(line, "rr\n") == 0)
		return (0);
	else if (ft_strcmp(line, "ra\n") == 0)
		return (0);
	else if (ft_strcmp(line, "rb\n") == 0)
		return (0);
	else
		return (-1);
}
