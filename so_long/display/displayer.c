/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displayer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:52:22 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/07 17:46:30 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	displayer(t_data *data, t_img img)
{
	int			i;
	int			j;
	t_vector	vec;

	i = 0;
	j = 0;
	vec.x = 0;
	vec.y = 0;
	while (data->map[i])
	{
		while (data->map[i][j])
		{
			if (data->map[i][j] == '1')
				display_wall(data, img, vec);
			if (data->map[i][j] == '0')
				display_floor(data, img, vec);
			vec.x += 48;
			j++;
		}
		i++;
		j = 0;
		vec.x = 0;
		vec.y += 48;
	}
}

void	displayer_2(t_data *data, t_img img)
{
	int			i;
	int			j;
	t_vector	vec;

	i = -1;
	j = 0;
	vec.x = 0;
	vec.y = 0;
	while (data->map[++i])
	{
		while (data->map[i][j])
		{
			if (data->map[i][j] == 'P')
				display_perso(data, img, vec);
			if (data->map[i][j] == 'C')
				display_collect(data, img, vec);
			if (data->map[i][j] == 'E')
				display_exit(data, img, vec);
			vec.x += 48;
			j++;
		}
		j = 0;
		vec.x = 0;
		vec.y += 48;
	}
}

void	mini_displayer(t_data *data, t_img img)
{
	int			i;
	int			j;
	t_vector	vec;

	i = 0;
	j = 0;
	vec.x = 0;
	vec.y = 0;
	while (data->map[i])
	{
		while (data->map[i][j])
		{
			if (data->map[i][j] == 'P')
				display_perso(data, img, vec);
			vec.x += 48;
			j++;
		}
		i++;
		j = 0;
		vec.x = 0;
		vec.y += 48;
	}
}

void	mini_displayer_2(t_data *data, t_img img)
{
	int			i;
	int			j;
	t_vector	vec;

	i = 0;
	j = 0;
	vec.x = 0;
	vec.y = 0;
	while (data->map[i])
	{
		while (data->map[i][j])
		{
			if (data->map[i][j] == 'P')
				display_floor(data, img, vec);
			vec.x += 48;
			j++;
		}
		i++;
		j = 0;
		vec.x = 0;
		vec.y += 48;
	}
}
