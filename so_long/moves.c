/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:53:03 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/22 17:17:38 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_down(int x, int y, char **map)
{
	char tmp;

	tmp = map[x + 1][y];
	map[x + 1][y] = map[x][y];
	map[x][y] = tmp;
}

void	move_up(int x, int y, char **map)
{
	char tmp;

	tmp = map[x - 1][y];
	map[x - 1][y] = map[x][y];
	map[x][y] = tmp;
}

void	move_right(int x, int y, char **map)
{
	char tmp;

	tmp = map[x][y + 1];
	map[x][y + 1] = map[x][y];
	map[x][y] = tmp;
}

void	move_left(int x, int y, char **map)
{
	char tmp;

	tmp = map[x][y - 1];
	map[x][y - 1] = map[x][y];
	map[x][y] = tmp;
}
