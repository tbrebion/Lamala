/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:35:37 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/28 16:34:20 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	handle_input(int keysym, t_data *data/*, int x, int y, char **map*/)
{
	if (keysym == 53)
	{
		mlx_destroy_window(data->mlx_ptr, data->win_ptr);
		exit(EXIT_SUCCESS);
	}/*
	if (keysym == 1)
	{
		move_down(x, y, map);
		return (0);
	}
	if (keysym == 13)
	{
		move_up(x, y, map);
		return (0);
	}
	if (keysym == 0)
	{
		move_left(x, y, map);
		return (0);
	}
	if (keysym == 2)
	{
		move_right(x, y, map);
		return (0);
	}*/
	return (0);
}

int	ft_close(t_data *data)
{
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	//free_all();
	exit(EXIT_SUCCESS);
	return (0);
}

int	main(int ac, char **av)
{
	t_data	data;
	t_img	img;
	int		width = 0;
	int		height = 0;
	char	*map;
	char	**maps;

	map = save_map(av);
	maps = map_lines(map);
	check_arg(ac, av);
	checker(av);

	data.mlx_ptr = mlx_init();
	if (data.mlx_ptr == NULL)
		return (1);
	data.win_ptr = mlx_new_window(data.mlx_ptr, 1920, 1080, "TEST");
	if (data.win_ptr == NULL)
	{
		free(data.win_ptr);
		return (1);
	}
	img.img = mlx_new_image(data.mlx_ptr, 1920, 1080);
	
	displayer(data, maps, img, width, height);

	mlx_key_hook(data.win_ptr, &handle_input, &data);
	mlx_hook(data.win_ptr, 17, 0, ft_close,  &data);
	mlx_loop(data.mlx_ptr);
	free(data.mlx_ptr);
	return (0);
}






