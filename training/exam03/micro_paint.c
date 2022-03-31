/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   micro_paint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:26:55 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/31 13:51:29 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_zone
{
	int		width;
	int		height;
	char	background;
}	t_zone;

typedef struct s_shape
{
	char			type;
	float			x;
	float			y;
	float			width;
	float			height;
	char			color;
	struct s_shape	*next;
}	t_shape;

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);	
}

int	str_error(char *str, int ret)
{
	write(1, str, ft_strlen(str));
	return (ret);
}

int	clear_all(FILE *file, char *drawing)
{
	fclose(file);
	if(drawing)
		free(drawing);
	return (1);
}

int	check_zone(t_zone *zone)
{
	return (zone->width > 0 && zone->width <= 300
			&& zone->height > 0 && zone->height <= 300);
}

int	check_shape(t_shape *shape)
{
	return (shape->width > 0.00000000 && shape->height > 0.00000000
			&& (shape->type == 'r' || shape->type == 'R'));
}

int	get_zone(FILE *file, t_zone *zone)
{
	int	scan_ret;

	if ((scan_ret = fscanf(file, "%d %d %c\n", &zone->width, &zone->height, &zone->background)) != 3)
		return (0);
	if (!check_zone(zone))
		return (0);
	if (scan_ret == -1)
		return (0);
	return (1);
}
