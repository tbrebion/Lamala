/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:31:52 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/23 14:34:10 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "so_long.h"

void	my_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

int	main(int ac, char **av)
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;

	check_arg(ac, av);
	mlx = mlx_init();		
	mlx_win = mlx_new_window(mlx, 1920, 1080, "so_long");
	img.img = mlx_new_image(mlx, 1920, 1080);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	
	int	i = 5;
	int	j = 5;
	while (i++ < 500)
		my_pixel_put(&img, j, i, 0x00FF0000);
	while (j++ < 500)	
		my_pixel_put(&img, j, i, 0x00FF0000);
	while (i-- > 5)
		my_pixel_put(&img, j, i, 0x00FF0000);
	while (j-- > 5)	
		my_pixel_put(&img, j, i, 0x00FF0000);

	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}*/
