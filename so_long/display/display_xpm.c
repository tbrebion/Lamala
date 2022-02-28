/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_xpm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:43:08 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/28 16:35:38 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	display_wall(t_data data, t_img wall, t_vector vec, int width, int height)
{
	wall.img = mlx_xpm_file_to_image(data.mlx_ptr, "./img/tree_32.xpm", &width, &height);
	wall.addr = mlx_get_data_addr(wall.img, &wall.bpp, &wall.line_length, &wall.endian);
	mlx_put_image_to_window(data.mlx_ptr, data.win_ptr, wall.img, vec.x, vec.y);
}

void	display_floor(t_data data, t_img floor, t_vector vec, int width, int height)
{
	floor.img = mlx_xpm_file_to_image(data.mlx_ptr, "./img/sand_32.xpm", &width, &height);
	floor.addr = mlx_get_data_addr(floor.img, &floor.bpp, &floor.line_length, &floor.endian);
	mlx_put_image_to_window(data.mlx_ptr, data.win_ptr, floor.img, vec.x, vec.y);
}

void	display_megaman(t_data data, t_img megaman, t_vector vec, int width, int height)
{
	megaman.img = mlx_xpm_file_to_image(data.mlx_ptr, "./img/megaman_32.xpm", &width, &height);
	megaman.addr = mlx_get_data_addr(megaman.img, &megaman.bpp, &megaman.line_length, &megaman.endian);
	mlx_put_image_to_window(data.mlx_ptr, data.win_ptr, megaman.img, vec.x, vec.y);
}

//display collectible
//display exit
