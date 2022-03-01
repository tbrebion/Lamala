/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_xpm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:43:08 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/01 16:23:12 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
void	display_wall(t_data data, t_game *game)
{
	game->wall.img = mlx_xpm_file_to_image(data.mlx_ptr, "./img/48tree.xpm", )

	wall.img = mlx_xpm_file_to_image(data.mlx_ptr, "./img/48tree.xpm", &width, &height);
	wall.addr = mlx_get_data_addr(wall.img, &wall.bpp, &wall.line_length, &wall.endian);
	mlx_put_image_to_window(data.mlx_ptr, data.win_ptr, wall.img, vec.x, vec.y);
}
*/

void	display_wall(t_data data, t_img wall, t_vector vec, int width, int height)
{
	wall.img = mlx_xpm_file_to_image(data.mlx_ptr, "./img/48tree.xpm", &width, &height);
	wall.addr = mlx_get_data_addr(wall.img, &wall.bpp, &wall.line_length, &wall.endian);
	mlx_put_image_to_window(data.mlx_ptr, data.win_ptr, wall.img, vec.x, vec.y);
}

void	display_floor(t_data data, t_img floor, t_vector vec, int width, int height)
{
	floor.img = mlx_xpm_file_to_image(data.mlx_ptr, "./img/48green.xpm", &width, &height);
	floor.addr = mlx_get_data_addr(floor.img, &floor.bpp, &floor.line_length, &floor.endian);
	mlx_put_image_to_window(data.mlx_ptr, data.win_ptr, floor.img, vec.x, vec.y);
}

void	display_megaman(t_data data, t_img megaman, t_vector vec, int width, int height)
{
	megaman.img = mlx_xpm_file_to_image(data.mlx_ptr, "./img/48megaman.xpm", &width, &height);
	megaman.addr = mlx_get_data_addr(megaman.img, &megaman.bpp, &megaman.line_length, &megaman.endian);
	mlx_put_image_to_window(data.mlx_ptr, data.win_ptr, megaman.img, vec.x, vec.y);
}

void	display_collect(t_data data, t_img collect, t_vector vec, int width, int height)
{
	collect.img = mlx_xpm_file_to_image(data.mlx_ptr, "./img/48star.xpm", &width, &height);
	collect.addr = mlx_get_data_addr(collect.img, &collect.bpp, &collect.line_length, &collect.endian);
	mlx_put_image_to_window(data.mlx_ptr, data.win_ptr, collect.img, vec.x, vec.y);
}

void	display_exit(t_data data, t_img exit, t_vector vec, int width, int height)
{
	exit.img = mlx_xpm_file_to_image(data.mlx_ptr, "./img/48shuttle2.xpm", &width, &height);
	exit.addr = mlx_get_data_addr(exit.img, &exit.bpp, &exit.line_length, &exit.endian);
	mlx_put_image_to_window(data.mlx_ptr, data.win_ptr, exit.img, vec.x, vec.y);
}
