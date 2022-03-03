/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:35:37 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/03 19:20:56 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	handle_input(int keysym, t_data *data, t_vector vec/*, t_img img*/)
{
//	int	w = 0;
//	int	h = 0;

	if (keysym == 53)
		ft_close(data);
	if (keysym == 1)
		move_down(vec, data->map);
	if (keysym == 13)
		move_up(vec, data->map);
	if (keysym == 0)
		move_left(vec, data->map);
	if (keysym == 2)
		move_right(vec, data->map);
	//displayer((*data), data->map, img, w, h);
	return (1);
}

int	ft_close(t_data *data)
{
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	//free_all();
	exit(EXIT_SUCCESS);
	return (1);
}

int	main(int ac, char **av)
{
	t_data	data;
	t_coord	coord;
	t_img	img;
//	t_wh	wh;
	int		w = 0;
	int		h = 0;

	checker(ac, av);
	init_map_coord(&data, &coord, av);
	init_window(&data, &coord);
	
	img.img = mlx_new_image(data.mlx_ptr, coord.abs, coord.ord);

	displayer(&data, img, w, h);

	mlx_key_hook(data.win_ptr, &handle_input, &data);
	mlx_hook(data.win_ptr, 17, 0, ft_close,  &data);
	mlx_loop(data.mlx_ptr);
	free(data.mlx_ptr);
	return (0);
}






