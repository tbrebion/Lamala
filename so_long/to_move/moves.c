/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:53:03 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/04 15:06:36 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	move_down(t_vector vec, char **map)
{
	char tmp;

	vec.x = player_line(map);
	vec.y = player_coll(map);
	if (map[vec.x + 1][vec.y] == '1')
		return ;
	if (map[vec.x + 1][vec.y] == 'C')
		map[vec.x + 1][vec.y] = '0';
	tmp = map[vec.x + 1][vec.y];
	map[vec.x + 1][vec.y] = map[vec.x][vec.y];
	map[vec.x][vec.y] = tmp;
}

void	move_up(t_vector vec, char **map)
{
	char tmp;

	vec.x = player_line(map);
	vec.y = player_coll(map);
	if (map[vec.x - 1][vec.y] == '1')
		return ;
	if (map[vec.x - 1][vec.y] == 'C')
		map[vec.x - 1][vec.y] = '0';
	tmp = map[vec.x - 1][vec.y];
	map[vec.x - 1][vec.y] = map[vec.x][vec.y];
	map[vec.x][vec.y] = tmp;
}

void	move_right(t_vector vec, char **map)
{
	char tmp;

	vec.x = player_line(map);
	vec.y = player_coll(map);
	if (map[vec.x][vec.y + 1] == '1')
		return ;
	if (map[vec.x][vec.y + 1] == 'C')
		map[vec.x][vec.y + 1] = '0';
	tmp = map[vec.x][vec.y + 1];
	map[vec.x][vec.y + 1] = map[vec.x][vec.y];
	map[vec.x][vec.y] = tmp;
}

void	move_left(t_vector vec, char **map)
{
	char tmp;

	vec.x = player_line(map);
	vec.y = player_coll(map);
	if (map[vec.x][vec.y - 1] == '1')
		return ;
	if (map[vec.x][vec.y - 1] == 'C')
		map[vec.x][vec.y - 1] = '0';
	tmp = map[vec.x][vec.y - 1];
	map[vec.x][vec.y - 1] = map[vec.x][vec.y];
	map[vec.x][vec.y] = tmp;
}
