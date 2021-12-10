/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:20:13 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/10 15:36:11 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	display_char(char *input, int i, int char_count, int x, va_list args)
{
	if (input[i + 1] == 'c')
	{
		x = (int)va_arg(args, int);
		ft_putchar(x);
		char_count += ft_putchar(x);
	}
	else
		return ;
}
