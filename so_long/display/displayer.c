/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displayer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:52:22 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/28 16:35:50 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	displayer(t_data data, char  **map, t_img img, int w, int h)
{
	int	i;
	int	j;
	t_vector vec;

	i = 0;
	j = 0;
	vec.x = 0;
	vec.y = 0;
	while (map[i])
	{
		while (map[i][j])
		{
			if (map[i][j] == '1')
			{
				display_floor(data, img, vec, w, h);
				display_wall(data, img, vec, w, h);
			}
			if (map[i][j] == 'P')
			{
				display_floor(data, img, vec, w, h);
				display_megaman(data, img, vec, w, h);
			}
			if (map[i][j] == 'C')
			{
				display_floor(data, img, vec, w, h);
				//display_collect(data, img, vec, w, h);
			}
			if (map[i][j] == 'E')
			{
				display_floor(data, img, vec, w, h);
				//display_exit(data, img, vec, w, h);
			}
			if (map[i][j] == '0')
				display_floor(data, img, vec, w, h);
			vec.x += 32;
			j++;
		}
		i++;
		j = 0;
		vec.x = 0;
		vec.y += 32;
	}
}
