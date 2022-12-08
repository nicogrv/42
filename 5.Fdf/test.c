/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:36:35 by ngriveau          #+#    #+#             */
/*   Updated: 2022/12/08 10:44:45 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>

#include "fdf.h"

int ft_x_map(char *ligne, int xmax)
{
    int i;
    int x;
	
	i = 0;
	x = 0;
	while (ligne[i] != '\n' && ligne[i] != '\0')
	{
		if (ft_isdigit(ligne[i]))
		{
			x++;
			// printf("x = %d\n",x);
			while (ft_isdigit(ligne[i]))
				i++;
		}
		else
			i++;
	}
	if (xmax < x)
		xmax = x;
	return (xmax);
}

int ft_y_map(int fd, int *xmax)
{
    int y;
    char *ligne;
    
    y = 0;
    while (ligne = get_next_line(fd))
    {
		*xmax = ft_x_map(ligne, *xmax);
		//printf("xmax = %d\n",*xmax);
		free(ligne);    
        y++;
	}
	close(fd);
    return (y);
}


void ft_fill_map(t_map *m, int fd)
{
    int i;
	int y;
	int x;
	char *ligne;
	
	y = 0;
    i = 0;
    x = 0;
	while (ligne = get_next_line(fd))
	{
		// printf("\t%s", ligne);
    	m->m[y] = ft_calloc(sizeof(t_pixel),(m->x + 1));
		while (ligne[i] != '\n' && ligne[i] != '\0')
		{
			if (ft_isdigit(ligne[i]) || ligne[i] == '-')
			{
				//printf("\tmap[%d][%d] = %d\n",y, x , map[y][x]);
				m->m[y][x].y = y * m->z + m->d;
				m->m[y][x].x = x * m->z + m->d;
				m->m[y][x].z = ft_atoi(ligne + i);

				//printf("\tmap[%d][%d] = %d\n",y, x , map[y][x]);
				x++;
				while (ft_isdigit(ligne[i]) || ligne[i] == '-')
					i++;
			}
			else
				i++;
		}
		i = 0;
		x = 0;
		y++;
	} 
	
}

void	ft_map(t_map *map)
{
    int fd;

    fd = open("./test_maps/42.fdf", O_RDONLY);
	map->y = ft_y_map(fd, &map->x);
    map->m = malloc(sizeof(t_pixel *) * (map->y + 1));    
    fd = open("./test_maps/42.fdf", O_RDONLY);
    ft_fill_map(map, fd);
}

int main (void)
{
	int x = 0;
	int y = 0;
	int color;

	t_map m;
	
	m.y = 0;  
	m.x = 0;
	m.z = 40;
	m.r = PI/2;
	m.d = 30;
    ft_map(&m);
	//ft_pos_pixel(&m);
	printf("------  x = %d, y = %d  ------  \n\n", m.x, m.y);
	printf("test = %f", m.m[y][x].x);
	m.mlx = mlx_init();
	m.mlx_win = mlx_new_window(m.mlx, 1920, 1080, "");
	while (y < m.y)
	{
		while (x < m.x)
		{
			ft_ligne(m.m[y][x].x, m.m[y][x].y, m.m[y][x].x+m.z, m.m[y][x].y, 0xfffffe, m.mlx_win, m.mlx);
			ft_ligne(m.m[y][x].x, m.m[y][x].y, m.m[y][x].x, m.m[y][x].y+m.z, 0xff00ff, m.mlx_win, m.mlx);
			x++;
		}
		y++;
		x = 0;
	}
	mlx_loop(m.mlx); 
}
//clear && gcc ft_isdigit.c test.c ft_atoi.c ft_calloc.c get_next_line_utils.c get_next_line.c ligne.c -lmlx -lm -lXext -lX11 -I ./minilibx/ -L ./minilibx && ./a.out