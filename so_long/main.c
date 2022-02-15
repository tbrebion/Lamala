/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:31:52 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/15 19:46:15 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibx_mms_20200219/mlx.h"
#include <stdlib.h> 

int	main(void)
{
	void	*mlx;
	void	*mlx_win;

	mlx = mlx_init();		
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello");
	mlx_loop(mlx);
	return (0);
}
