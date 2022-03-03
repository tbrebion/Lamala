/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:11:48 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/03 15:51:05 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	count_lines(char **av)
{
	int		i;
	char	*line;
	int		fd;

	fd = 0;
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
	//free(line);
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
	j = count_lines(av);
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
