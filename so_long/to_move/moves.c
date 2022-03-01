/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:53:03 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/01 18:16:45 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	move_down(t_vector vec/*int x, int y*/, char **map)
{
	char tmp;

	vec.x = player_line(map);
	vec.y = player_coll(map);
	tmp = map[vec.x + 1][vec.y];
	map[vec.x + 1][vec.y] = map[vec.x][vec.y];
	map[vec.x][vec.y] = tmp;
}

void	move_up(t_vector vec, char **map)
{
	char tmp;

	vec.x = player_line(map);
	vec.y = player_coll(map);
	tmp = map[vec.x - 1][vec.y];
	map[vec.x - 1][vec.y] = map[vec.x][vec.y];
	map[vec.x][vec.y] = tmp;
}

void	move_right(t_vector vec, char **map)
{
	char tmp;

	vec.x = player_line(map);
	vec.y = player_coll(map);
	tmp = map[vec.x][vec.y + 1];
	map[vec.x][vec.y + 1] = map[vec.x][vec.y];
	map[vec.x][vec.y] = tmp;
}

void	move_left(t_vector vec, char **map)
{
	char tmp;

	vec.x = player_line(map);
	vec.y = player_coll(map);
	tmp = map[vec.x][vec.y - 1];
	map[vec.x][vec.y - 1] = map[vec.x][vec.y];
	map[vec.x][vec.y] = tmp;
}
