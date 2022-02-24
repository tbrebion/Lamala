/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:07:47 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/24 17:13:34 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H

# include"mlx_macos/mlx.h"
# include"libft/libft.h"
//# include"get_next_line/get_next_line.h"
# include<stdlib.h>
# include<stdio.h>
# include<sys/types.h>
# include<sys/stat.h>
# include<fcntl.h>

typedef	struct	s_img
{
	void	*img;
	char 	*addr;
	int		bpp;
	int		line_length;
	int		endian;
}		t_img;

typedef	struct	s_data
{
	void	*mlx_ptr;
	void	*win_ptr;
	t_img	*img_ptr;
}	t_data;

int		ft_strcmp(const char *s1, const char *s2);
void	check_arg(int ac, char **av);
void	map_error(void);
int		check_map_elements(char *map_chars);
int		check_map_walls(char **map_lines);
int		check_rectangular(char **map_lines);
void	checker_map(char *map_chars, char **map_lines);
void	display_map(char **av, char **map);

#endif
