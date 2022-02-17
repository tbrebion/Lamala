/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:45:59 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/17 16:52:29 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void checker_map(char *map_chars, char **map_lines)
{
	if (check_map_elements(map_chars) == 0 || check_map_walls(map_lines) == 0
			|| check_rectangular(map_lines) == 0)
		map_error();
	return ;
}
