/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_xpm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:43:08 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/07 15:34:53 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	display_floor(t_data *data, t_img floor, t_vector vec)
{
	floor.img = mlx_xpm_file_to_image(data->mlx_ptr, "./img/48green.xpm", &data->w, &data->h);
	floor.addr = mlx_get_data_addr(floor.img, &floor.bpp, &floor.ll, &floor.end);
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, floor.img, vec.x, vec.y);
}

void	display_wall(t_data *data, t_img wall, t_vector vec)
{
	display_floor(data, wall, vec);
	wall.img = mlx_xpm_file_to_image(data->mlx_ptr, "./img/48tree.xpm", &data->w, &data->h);
	wall.addr = mlx_get_data_addr(wall.img, &wall.bpp, &wall.ll, &wall.end);
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, wall.img, vec.x, vec.y);
}

void	display_perso(t_data *data, t_img perso, t_vector vec)
{
	display_floor(data, perso, vec);
	perso.img = mlx_xpm_file_to_image(data->mlx_ptr, "./img/48megaman.xpm", &data->w, &data->h);
	perso.addr = mlx_get_data_addr(perso.img, &perso.bpp, &perso.ll, &perso.end);
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, perso.img, vec.x, vec.y);
}

void	display_collect(t_data *data, t_img collect, t_vector vec)
{
	display_floor(data, collect, vec);
	collect.img = mlx_xpm_file_to_image(data->mlx_ptr, "./img/48star.xpm", &data->w, &data->h);
	collect.addr = mlx_get_data_addr(collect.img, &collect.bpp, &collect.ll, &collect.end);
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, collect.img, vec.x, vec.y);
}

void	display_exit(t_data *data, t_img exit, t_vector vec)
{
	display_floor(data, exit, vec);
	exit.img = mlx_xpm_file_to_image(data->mlx_ptr, "./img/48shuttle2.xpm", &data->w, &data->h);
	exit.addr = mlx_get_data_addr(exit.img, &exit.bpp, &exit.ll, &exit.end);
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, exit.img, vec.x, vec.y);
}
