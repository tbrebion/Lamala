/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:11:48 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/25 15:25:21 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	count_lines(int fd, char **av)
{
	int	i;
	char	*line;

	line = "ok";
	i = -1;
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		return (0);
	while (line)
	{
		line = get_next_line(fd);
		i++;
	}
	close(fd);
	return (i);
}

char	*save_map(char **av)
{
	int		fd;
	char	*line;
	char	*save;
	int 	i;
	int		j;

	fd = 0;
	j = count_lines(fd, av);
	i = 0;
	save = NULL;
	line = "ok";
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		return (NULL);
	while (i++ < j)
	{
		line = get_next_line(fd);
		save = ft_strjoin(save, line);
	}
	close(fd);
	return (save);
}

char	**map_lines(char *save)
{
	char	**ret;

	ret = ft_split(save, '\n');
	return (ret);
}



int	main(int ac, char **av)
{
	char	*map;
	char	**mappp;

	(void)ac;
	map = NULL;
	map = save_map(av);
	mappp = map_lines(map);
	checker(av);
	printf("%s", map);
	//printf("\n\n");
	//printf("%s", mappp[0]);
	//printf("\n");
	//printf("%s", mappp[1]);
	return (0);
}
