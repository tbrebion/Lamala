/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:11:48 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/23 16:34:46 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**save_map(void)
{

}

void	display_map(char **av, int x, int y)
{
	int	fd;
	int	i;

	fd = open(av[1], O_RDONLY);
	while ()
	map[i] = get_next_line(fd);
}
