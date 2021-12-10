/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_nb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:15:23 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/10 16:29:23 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	display_nb(const char *in, int i, int char_count, int x, va_list args)
{
	if (in[i + 1] == 'd' || in[i + 1] == 'i')
	{
		x = (int)va_args(args, int);
		ft_putnbr(x);
		char_count += ft_putnbr(x);
	}
	else
		return ;
}
