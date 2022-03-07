/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_xpm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:43:08 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/07 17:35:34 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	display_floor(t_data *data, t_img f, t_vector vec)
{
	f.img = mlx_xpm_file_to_image(data->mlx_ptr, "./img/g.xpm",
			&data->w, &data->h);
	f.addr = mlx_get_data_addr(f.img, &f.bpp, &f.ll, &f.end);
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, f.img, vec.x, vec.y);
}

void	display_wall(t_data *data, t_img w, t_vector vec)
{
	display_floor(data, w, vec);
	w.img = mlx_xpm_file_to_image(data->mlx_ptr, "./img/t.xpm",
			&data->w, &data->h);
	w.addr = mlx_get_data_addr(w.img, &w.bpp, &w.ll, &w.end);
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, w.img, vec.x, vec.y);
}

void	display_perso(t_data *data, t_img p, t_vector vec)
{
	display_floor(data, p, vec);
	p.img = mlx_xpm_file_to_image(data->mlx_ptr, "./img/m.xpm",
			&data->w, &data->h);
	p.addr = mlx_get_data_addr(p.img, &p.bpp, &p.ll, &p.end);
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, p.img, vec.x, vec.y);
}

void	display_collect(t_data *data, t_img c, t_vector vec)
{
	display_floor(data, c, vec);
	c.img = mlx_xpm_file_to_image(data->mlx_ptr, "./img/s.xpm",
			&data->w, &data->h);
	c.addr = mlx_get_data_addr(c.img, &c.bpp, &c.ll, &c.end);
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, c.img, vec.x, vec.y);
}

void	display_exit(t_data *data, t_img e, t_vector vec)
{
	display_floor(data, e, vec);
	e.img = mlx_xpm_file_to_image(data->mlx_ptr, "./img/h.xpm",
			&data->w, &data->h);
	e.addr = mlx_get_data_addr(e.img, &e.bpp, &e.ll, &e.end);
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, e.img, vec.x, vec.y);
}
