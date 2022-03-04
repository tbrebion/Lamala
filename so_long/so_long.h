/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:07:47 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/04 12:00:00 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H

# include"mlx_macos/mlx.h"
# include"libft/libft.h"
# include"get_next_line/get_next_line.h"
# include<stdlib.h>
# include<stdio.h>
# include<sys/types.h>
# include<sys/stat.h>
# include<fcntl.h>

typedef	struct	s_vector
{
	int	x;
	int	y;
}	t_vector;

typedef	struct	s_coord
{
	int	abs;
	int	ord;
}	t_coord;
/*
typedef	struct	s_wh
{
	int	w;
	int	h;
}	t_wh;
*/
typedef	struct	s_img
{
	void	*img;
	char 	*addr;
	int		bpp;
	int		ll;
	int		end;
}		t_img;

typedef	struct	s_data
{
	void		*mlx_ptr;
	void		*win_ptr;
	t_img		img;
	char		*linear_map;
	char		**map;
	t_vector	vec;
	int			w;
	int			h;
}	t_data;

int		ft_strcmp(const char *s1, const char *s2);
void	check_arg(int ac, char **av);
void	map_error(void);
int		check_map_elements(char *map_chars);
int		check_map_walls(char **map_lines);
int		check_rectangular(char **map_lines);
int		checker_map(char *map_chars, char **map_lines);
void	checker(int ac, char **av);

void	init_window(t_data *data, t_coord *coord);
void	init_map_coord(t_data *data, t_coord *coord, char **av);
int		count_lines(char **av);
char	*save_map(char **av);
char	**map_lines(char *save);
int		last_line(char **map);

int		handle_input(int keysym, t_data *data);
int		ft_close(t_data *data);

void	display_wall(t_data *data, t_img wall, t_vector vec, int width, int height);
void	display_floor(t_data *data, t_img floor, t_vector vec, int width, int height);
void	display_perso(t_data *data, t_img perso, t_vector vec, int width, int height);
void	display_collect(t_data *data, t_img collect, t_vector vec, int width, int height);
void	display_exit(t_data *data, t_img exit, t_vector vec, int width, int height);
void	displayer(t_data *data, t_img img, int w, int h);

int		player_line(char **map);
int		player_coll(char **map);

void	move_down(t_vector vec, char **map);
void	move_up(t_vector vec, char **map);
void	move_right(t_vector vec, char **map);
void	move_left(t_vector vec, char **map);

#endif
