/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:37:23 by ngriveau          #+#    #+#             */
/*   Updated: 2023/02/01 10:59:09 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

typedef struct s_pip
{
    int     ac;
    char    **av;
    char    **env;
    char       **path;
}               t_pip;

# include <stdio.h>
# include "./libft/libft.h"
# include<sys/wait.h>
#endif
