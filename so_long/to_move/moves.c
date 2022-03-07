/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:53:03 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/07 12:33:08 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	move_down(t_data *data, t_vector vec, char **map)
{
	char tmp;

	vec.x = player_line(map);
	vec.y = player_coll(map);
	if (map[vec.x + 1][vec.y] == '1')
		return ;
	if (map[vec.x + 1][vec.y] == 'C')
		map[vec.x + 1][vec.y] = '0';
	if (map[vec.x + 1][vec.y] == 'E' && nb_collect(map) > 0)
		return ;
	data->nb++;
	//display_floor(data, data->img, vec, data->w, data->h);
	if (map[vec.x + 1][vec.y] == 'E' && nb_collect(map) == 0)
	{
		map[vec.x][vec.y] = '0';
		ft_putnbr_fd(data->nb, 1);
		ft_close(data);
	}
	tmp = map[vec.x + 1][vec.y];
	map[vec.x + 1][vec.y] = map[vec.x][vec.y];
	map[vec.x][vec.y] = tmp;
/*	vec.x = (vec.x * 48) + 48;
	vec.y = vec.y * 48;
	display_perso(data, data->img, vec, data->w, data->h);*/
	ft_putnbr_fd(data->nb, 1);
	write(1, "\n", 1);
}

void	move_up(t_data *data, t_vector vec, char **map)
{
	char tmp;

	vec.x = player_line(map);
	vec.y = player_coll(map);
	if (map[vec.x - 1][vec.y] == '1')
		return ;
	if (map[vec.x - 1][vec.y] == 'C')
		map[vec.x - 1][vec.y] = '0';
	if (map[vec.x - 1][vec.y] == 'E' && nb_collect(map) > 0)
		return ;
	data->nb++;
	if (map[vec.x - 1][vec.y] == 'E' && nb_collect(map) == 0)
	{
		map[vec.x][vec.y] = '0';
		ft_putnbr_fd(data->nb, 1);
		ft_close(data);
	}
	tmp = map[vec.x - 1][vec.y];
	map[vec.x - 1][vec.y] = map[vec.x][vec.y];
	map[vec.x][vec.y] = tmp;
	ft_putnbr_fd(data->nb, 1);
	write(1, "\n", 1);
}

void	move_right(t_data *data, t_vector vec, char **map)
{
	char tmp;

	vec.x = player_line(map);
	vec.y = player_coll(map);
	if (map[vec.x][vec.y + 1] == '1')
		return ;
	if (map[vec.x][vec.y + 1] == 'C')
		map[vec.x][vec.y + 1] = '0';
	if (map[vec.x][vec.y + 1] == 'E' && nb_collect(map) > 0)
		return ;
	data->nb++;
	if (map[vec.x][vec.y + 1] == 'E' && nb_collect(map) == 0)
	{
		map[vec.x][vec.y] = '0';
		ft_putnbr_fd(data->nb, 1);
		ft_close(data);
	}
	tmp = map[vec.x][vec.y + 1];
	map[vec.x][vec.y + 1] = map[vec.x][vec.y];
	map[vec.x][vec.y] = tmp;
	ft_putnbr_fd(data->nb, 1);
	write(1, "\n", 1);
}

void	move_left(t_data *data, t_vector vec, char **map)
{
	char tmp;

	vec.x = player_line(map);
	vec.y = player_coll(map);
	if (map[vec.x][vec.y - 1] == '1')
		return ;
	if (map[vec.x][vec.y - 1] == 'C')
		map[vec.x][vec.y - 1] = '0';
	if (map[vec.x][vec.y - 1] == 'E' && nb_collect(map) > 0)
		return ;
	data->nb++;
	if (map[vec.x][vec.y - 1] == 'E' && nb_collect(map) == 0)
	{
		map[vec.x][vec.y] = '0';
		ft_putnbr_fd(data->nb, 1);
		ft_close(data);
	}
	tmp = map[vec.x][vec.y - 1];
	map[vec.x][vec.y - 1] = map[vec.x][vec.y];
	map[vec.x][vec.y] = tmp;
	ft_putnbr_fd(data->nb, 1);
	write(1, "\n", 1);
}
