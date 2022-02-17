/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:07:47 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/17 12:12:28 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H

# include"mlx/mlx.h"
# include<stdlib.h>
# include<stdio.h>

typedef	struct	s_data
{
	void	*img;
	char 	*addr;
	int		bits_per_pixels;
	int		line_length;
	int		endian;
}		t_data;

#endif
