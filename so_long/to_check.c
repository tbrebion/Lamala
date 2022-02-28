/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:45:59 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/28 12:15:45 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int checker_map(char *map_chars, char **map_lines)
{
	if (check_map_elements(map_chars) == 0 || check_map_walls(map_lines) == 0
			|| check_rectangular(map_lines) == 0)
		return (0);
	return (1);
}

void	checker(char **av)
{
	char	*map;
	char	**maps;

	map = save_map(av);
	maps = map_lines(map);
	//int	i = 0;

/*	while (maps[i++])
		printf("%s\n", maps[i]);*/
	
	if (checker_map(map, maps) == 0)
	{
		//printf("%s", map);
		//free_all();
		map_error();
	}
	return ;
}
