/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:11:48 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/24 14:49:47 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "so_long.h"

/*char	**save_map(void)
{

}*/

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line/get_next_line.h"

char	*display_map(char **av, char *map_line/*, int x, int y*/)
{
	int		fd;
	int		i;
	char	*save;

	i = 1;
	save = NULL;
	map_line = "ok";
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		return (NULL);
	//map_error();
	while (i != 0)
	{
		i = read (fd, save, 1);
		if (i == -1)
		{
			free(save);
			//map_error();
			return (NULL);
		}
	}
	save[i] = '\0';
	return (save);
}

int	main(int ac, char **av)
{
	char *map;

	(void)ac;
	map = NULL;
	map = display_map(av, map);
	printf("%s", map);
	return (0);
}
