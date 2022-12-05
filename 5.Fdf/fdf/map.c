/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:21:51 by ngriveau          #+#    #+#             */
/*   Updated: 2022/12/05 18:16:54 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		printf("xmax = %d\n",*xmax);
		free(ligne);    
        y++;
	}
	close(fd);
    return (y);
}


void ft_fill_map(int xmax, int fd, int **map)
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
    	map[y] = ft_calloc(sizeof(int *),(xmax + 1));
		while (ligne[i] != '\n' && ligne[i] != '\0')
		{
			if (ft_isdigit(ligne[i]))
			{
				map[y][x] = ft_atoi(ligne + i);
				// printf("\tmap[%d][%d] = %d\n",y, x , map[y][x]);
				x++;
				while (ft_isdigit(ligne[i]))
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

    fd = open("../test_maps/42.fdf", O_RDONLY);
	map->y = ft_y_map(fd, &map->x);
	printf("y = %d\t\tx = %d\n", map->y, map->x);
    map->map = malloc(sizeof(int *) * (map->y + 1));    
    fd = open("../test_maps/42.fdf", O_RDONLY);
	printf("x = %d \t y = %d", map->x , map->y);
    ft_fill_map(map->x, fd, map->map);
}

int main (void)
{
	int x = 0;
	int y = 0;
	t_map map;
	
	map.y = 0;
	map.x = 0;
    ft_map(&map);
	printf("map= %d\n", map.map[3][3]);
	printf("map->x = %d, map->y %d\n\n", map.x, map.y);
	while (y < map.y)
	{
		while (x < map.x)
		{
			printf("% 3d", map.map[y][x]);
			x++;
		}
		y++;
		x = 0;
		printf("\n");
	}
}
