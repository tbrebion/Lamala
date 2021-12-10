/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:20:13 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/10 16:32:45 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	display_char(const char *in, int i, int c, int x, va_list args)
{
	if (in[i + 1] == 'c')
	{
		x = (int)va_arg(args, int);
		ft_putchar(x);
		c += ft_putchar(x);
	}
	else
		return ;
}
