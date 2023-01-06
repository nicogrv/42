/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngriveau <ngriveau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:47:59 by ngriveau          #+#    #+#             */
/*   Updated: 2023/01/06 12:18:06 by ngriveau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	ft_all(t_map *m)
{	
	if (m->i == 360)
		m->i = 0;
	if (m->i == -5)
		m->i = 355;
	if (m->r == 360)
		m->r = 0;
	if (m->r == -5)
		m->r = 355;
	if (ft_map(m) == -1)
		return (-1);
	ft_hauteur(m);
	ft_centre(m);
	ft_rota(m);
	ft_incl(m);
	ft_move(m);
	ft_init_color(m);
	ft_print_map(m);
	mlx_put_image_to_window(m->mlx, m->mlx_win, m->img.i, 0, 0);
	ft_monitoring(m);
	return (1);
}

int	ft_intivalue(t_map *m)
{
	ft_init_path_map(m);
	m->winx = WIDTH;
	m->winy = HEIGHT;
	m->z = 1;
	m->r = 45;
	if (m->verifprojection == 1)
		m->i = 20;
	m->hauteur = 0.02;
	m->movex = 0;
	m->movey = 0;
	m->x = 0;
	m->y = 0;
	m->mouse_move = 0;
	if (ft_copy_map(m) == -1)
		return (-1);
	m->z = m->winx / sqrt(pow(m->x * m->z, 2) + pow(m->y * m->z, 2));
	m->hauteur = m->z / 1000;
	m->minh = 0;
	m->maxh = 0;
	return (1);
}

int	ft_cross_close(t_map *m)
{
	ft_free_map(m, 1);
	mlx_destroy_image(m->mlx, m->img.i);
	mlx_destroy_window(m->mlx, m->mlx_win);
	mlx_destroy_display(m->mlx);
	free(m->mlx);
	exit(0);
	return (1);
}

int	ft_launch(t_map *m, int argc, char **argv)
{
	if (argc != 2)
		return (-1);
	m->pathmap.indexmap = 0;
	m->setupcolor = 0;
	m->verifmonitor = 1;
	m->pathmap.currentmap = argv[1];
	m->pathmap.map0 = argv[1];
	m->verifprojection = 1;
	return (1);
}

int	main(int argc, char **argv)
{
	t_map	m;

	if (ft_launch(&m, argc, argv) == -1)
		return (write(1, "ARG ERROR\n", 11), 1);
	if (ft_intivalue(&m) == -1)
		return (write(1, "MALLOC ERROR INIT\n", 19), 1);
	m.mlx = mlx_init();
	m.mlx_win = mlx_new_window(m.mlx, m.winx, m.winy, "FDF");
	mlx_string_put(m.mlx, m.mlx_win, 5, 13, 0xffffff, "Loading ...");
	m.img.i = mlx_new_image(m.mlx, m.winx, m.winy);
	m.img.data = mlx_get_data_addr(m.img.i, &m.img.p, &m.img.size, &m.img.e);
	if (ft_all(&m) == -1)
		return (write(1, "MALLOC ERROR COPY\n", 19), -1);
	mlx_hook(m.mlx_win, 2, 1L << 0, &ft_key, &m);
	mlx_hook(m.mlx_win, 17, 1L << 0, &ft_cross_close, &m);
	mlx_mouse_hook(m.mlx_win, &ft_zoom, &m);
	mlx_do_key_autorepeaton(m.mlx);
	mlx_loop(m.mlx);
	return (0);
}
