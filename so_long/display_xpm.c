/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_xpm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:43:08 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/24 17:36:53 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	display_wall(t_data data, t_img wall, int x, int y, int width, int height)
{
	wall.img = mlx_xpm_file_to_image(data.mlx_ptr, "./img/tree_32.xpm", &width, &height);
	wall.addr = mlx_get_data_addr(wall.img, &wall.bpp, &wall.line_length, &wall.endian);
	mlx_put_image_to_window(data.mlx_ptr, data.win_ptr, wall.img, x, y);
}

void	display_floor(t_data data, t_img floor, int x, int y, int width, int height)
{
	floor.img = mlx_xpm_file_to_image(data.mlx_ptr, "./img/sand_32.xpm", &width, &height);
	floor.addr = mlx_get_data_addr(floor.img, &floor.bpp, &floor.line_length, &floor.endian);
	mlx_put_image_to_window(data.mlx_ptr, data.win_ptr, floor.img, x, y);
}

void	display_megaman(t_data data, t_img megaman, int x, int y, int width, int height)
{
	megaman.img = mlx_xpm_file_to_image(data.mlx_ptr, "./img/megaman_32.xpm", &width, &height);
	megaman.addr = mlx_get_data_addr(megaman.img, &megaman.bpp, &megaman.line_length, &megaman.endian);
	mlx_put_image_to_window(data.mlx_ptr, data.win_ptr, megaman.img, x, y);
}

//display collectible
//display exit
