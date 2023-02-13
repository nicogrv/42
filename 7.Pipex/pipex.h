/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:37:23 by ngriveau          #+#    #+#             */
/*   Updated: 2023/02/13 19:32:06 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

typedef struct s_pip
{
    int     ac;
	int		i;
    char    **av;
    char    **env;
    char    **path;

    int     fdin;
    int     fdout;
}               t_pip;

# include <stdio.h>
# include "./libft/libft.h"
# include<sys/wait.h>

#endif
