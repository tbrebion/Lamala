/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:37:50 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/10 16:41:55 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	display_hex(const char *in, int i, int char_count, int x, va_list args)
{
	if (in[i + 1] == 'x')
	{
		x = (int)va_args(args, int);
		ft_putnbr_hex(x);
		char_count += ft_putnbr_hex(x);
	}
	else
		return ;
}
