/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:31:19 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/28 12:15:38 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_arg(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putstr_fd("Error\nwrong number of args !\n", 2);
		exit(0);
	}
	if (!ft_strrchr((char *)av[1], '.'))
	{
		ft_putstr_fd("Error\ninvalid arg !\n", 2);
		exit(0);
	}
	if (ft_strcmp(ft_strrchr((char *)av[1], '.'), ".ber") != 0)
	{
		ft_putstr_fd("Error\nfile must be \"<name>.ber\" !\n", 2);
		exit(0);
	}
}

void	map_error(void)
{
	ft_putstr_fd("Error\nwrong map's format\n", 2);
	exit(EXIT_FAILURE);
}

int	check_map_elements(char *map_chars)
{
	int	i = 0;
	int	perso = 0;
	int	collect = 0;
	int	exit = 0;

	while (i < (int)ft_strlen(map_chars))
	{
		if (map_chars[i] == 'P')
			perso++;
		if (map_chars[i] == 'C')
			collect++;
		if (map_chars[i] == 'E')
			exit++;
		if (map_chars[i] != 'P' && map_chars[i] != 'E' && map_chars[i] != '0'
			&& map_chars[i] != '1' && map_chars[i] != 'C' && map_chars[i] != '\n')
			return (0);
		i++;
	}
	if (perso < 1 || collect < 1 || exit < 1)
		return (0);
	return (1);
}

int	check_map_walls(char **map_lines)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map_lines[i])
	{
		while (j++ < ((int)ft_strlen(map_lines[0]) - 1))
		{
			if (map_lines[0][j] != '1')
				return (0);
		}
		if (map_lines[i][0] != '1' 
			&& map_lines[i][ft_strlen(map_lines[i])] != '1')
			return (0);
		i++;
	}
	i--;
	j = 0;
	while (j++ < ((int)ft_strlen(map_lines[0]) - 1))
	{
		if (map_lines[i][j] != '1')
			return (0);
	}
	return (1);
}

int	check_rectangular(char **map_lines)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map_lines[j])
	{
		j = i + 1;
		if (ft_strlen(map_lines[i]) != ft_strlen(map_lines[j]))
		{
			printf("\nlines -->%d %d\n", i, j); //PB avec derniere ligne qui na pas le '\n'
			return (0);
		}
		i++;
	}
	return (1);
}
