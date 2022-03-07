/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_player.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:54:45 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/07 15:06:19 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_player(char **map)
{
	int	i;
	int	j;
	int	player;

	i = 0;
	j = 0;
	player = 0;
	while (map[i])
	{
		while (map[i][j])
		{
			if (map[i][j] == 'P')
			{
				player++;
				if (player > 1)
					map[i][j] = '0';
			}
			j++;
		}
		j = 0;
		i++;
	}
}
