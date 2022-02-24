/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:40:53 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/24 17:19:03 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	display_img(char *map, t_data data, t_img img)
{
	int	i;
	int	x; //a partir de quel pixel afficher
	int	y; //===============================
	int	width;  //taille img
	int	height; //==========

	i = 0;
	x = 0;
	y = 0;
	while (map[i])
	{
		if (map[i] == '1')
			display_wall();
		if (map[i] == '0')
			display_floor();
		if (map[i] == 'P')
			display_megaman();
		//collect
		//exit
		if (map[i] == '\n')
			i++;
		i++;
	}
}
