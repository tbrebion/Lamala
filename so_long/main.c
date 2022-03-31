/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:35:37 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/31 15:30:19 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	handle_input(int keysym, t_data *data)
{
	data->w = 0;
	data->h = 0;
	mini_displayer_2(data, data->img);
	if (keysym == 53)
		ft_close(data);
	if (keysym == 1 || keysym == 125)
		move_down(data, data->vec, data->map);
	if (keysym == 13 || keysym == 126)
		move_up(data, data->vec, data->map);
	if (keysym == 0 || keysym == 123)
		move_left(data, data->vec, data->map);
	if (keysym == 2 || keysym == 124)
		move_right(data, data->vec, data->map);
	mini_displayer(data, data->img);
	return (1);
}

int	ft_close(t_data *data)
{
	ft_free(data->map, data->linear_map);
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	free(data->mlx_ptr);
	exit(EXIT_SUCCESS);
	return (1);
}

int	main(int ac, char **av)
{
	t_data	data;
	t_coord	coord;

	data.w = 0;
	data.h = 0;
	data.nb = 0;
	checker(ac, av);
	init_map_coord(&data, &coord, av);
	check_player(data.map);
	init_window(&data, &coord);
	displayer(&data, data.img);
	displayer_2(&data, data.img);
	mlx_key_hook(data.win_ptr, &handle_input, &data);
	mlx_hook(data.win_ptr, 17, 0, ft_close, &data);
	mlx_loop(data.mlx_ptr);
	mlx_destroy_image(data.mlx_ptr, &data.img);
	ft_close(&data);
	return (0);
}
