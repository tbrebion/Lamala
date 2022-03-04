/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:51:25 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/04 11:03:44 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	init_window(t_data *data,  t_coord *coord)
{
	data->mlx_ptr = mlx_init();
	if (data->mlx_ptr == NULL)
		ft_close(data);
	data->win_ptr = mlx_new_window(data->mlx_ptr, coord->abs, coord->ord, "./so_long");
	if (data->win_ptr == NULL)
	{
		free(data->win_ptr);
		ft_close(data);
	}
	data->img.img = mlx_new_image(data->mlx_ptr, coord->abs, coord->ord);
}

void	init_map_coord(t_data *data, t_coord *coord, char **av)
{
	data->linear_map = save_map(av);
	data->map = map_lines(data->linear_map);
	coord->abs = 48 * ft_strlen(data->map[0]);
	coord->ord = 48 * count_lines(av);
}
