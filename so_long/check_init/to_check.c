/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:45:59 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/03 19:16:50 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	last_line(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}

int checker_map(char *map_chars, char **map_lines)
{
	if (check_map_elements(map_chars) == 0 || check_map_walls(map_lines) == 0
			|| check_rectangular(map_lines) == 0)
		return (0);
	return (1);
}

void	checker(int ac, char **av)
{
	char	*map;
	char	**maps;

	check_arg(ac, av);
	map = save_map(av);
	maps = map_lines(map);
	if (checker_map(map, maps) == 0)
		map_error();
	return ;
}
