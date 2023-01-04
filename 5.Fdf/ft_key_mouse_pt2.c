/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_mouse_pt2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 19:20:20 by ngriveau          #+#    #+#             */
/*   Updated: 2023/01/04 12:06:54 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void    ft_init_path_map(t_map  *m)
{
    m->pathmap.map1 = MAP1;
    m->pathmap.map2 = MAP2;
    m->pathmap.map3 = MAP3;
    m->pathmap.map4 = MAP4;
    m->pathmap.map5 = MAP5;
    m->pathmap.map6 = MAP6;
    m->pathmap.map7 = MAP7;
    m->pathmap.map8 = MAP8;
    m->pathmap.map9 = MAP9;
}

void	ft_key_pt4(int keycode, t_map *m)
{
    fprintf(stderr, "test code %d\n", keycode);
    if (keycode == TOUCH_M)
    {
        fprintf(stderr, "b key pt4 current map(%d) = %s\n", m->pathmap.indexmap, m->pathmap.currentmap);
        m->pathmap.indexmap += 1;
        fprintf(stderr, "a key pt4 current map(%d) = %s\n", m->pathmap.indexmap, m->pathmap.currentmap);
        ft_free_map(m, 1);
        if (m->pathmap.indexmap == 0)
            m->pathmap.currentmap = m->pathmap.map0;
        else if (m->pathmap.indexmap == 1)
            m->pathmap.currentmap = m->pathmap.map1;
        else if (m->pathmap.indexmap == 2)
            m->pathmap.currentmap = m->pathmap.map2;
        else if (m->pathmap.indexmap == 3)
            m->pathmap.currentmap = m->pathmap.map3;
        else if (m->pathmap.indexmap == 4)
            m->pathmap.currentmap = m->pathmap.map4;
        else if (m->pathmap.indexmap == 5)
            m->pathmap.currentmap = m->pathmap.map5;
        else if (m->pathmap.indexmap == 6)
            m->pathmap.currentmap = m->pathmap.map6;
        else if (m->pathmap.indexmap == 7)
            m->pathmap.currentmap = m->pathmap.map7;
        else if (m->pathmap.indexmap == 8)
            m->pathmap.currentmap = m->pathmap.map8;
        else if (m->pathmap.indexmap == 9)
            m->pathmap.currentmap = m->pathmap.map9;
        else
        {
            m->pathmap.indexmap = 0;
            m->pathmap.currentmap = m->pathmap.map0;
        }
        ft_intivalue(m);
        ft_all(m);

    }
}

// touche m
// free map
// clear
// chaanger path
// init map 
// suite