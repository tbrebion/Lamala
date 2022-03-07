/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_collect.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 15:09:25 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/07 10:29:15 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	nb_collect(char **map)
{
	int	i;
	int	j;
	int	star;

	i = 0;
	j = 0;
	star = 0;
	while (map[i])
	{
		while (map[i][j])
		{
			if (map[i][j] == 'C')
				star++;
			j++;
		}
		j = 0;
		i++;
	}
	return (star);
}
