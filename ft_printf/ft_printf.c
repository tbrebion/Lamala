/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:20:41 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/13 14:02:53 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	int		i;
	int		char_count;
	va_list		args;

	va_start(args, input);
	i = 0;
	char_count = 0;
	while (input[i])
	{
		if (print_noparams_char(input, char_count, i) == 0)
			return (char_count);
		if (input[i] == '%')
		{
			if (input[i + 1] == 'c')
				char_count += ft_putchar(va_args(args, int));

			if (input[i + 1] == 's')
				char_count += ft_putstr(va_args(args, int));

			if (input[i + 1] == 'p')
				char_count += ft_put_p(va_args(args, void *))

			if (input[i + 1] == 'i' || input[i + 1] == 'd')
				char_count += ft_putnbr(va_args(args, int));

			if (input[i + 1] == 'u')
				char_count += ft_putunbr(va_args(args, int));

			if (input[i + 1] == 'x')
				char_count += ft_putnbr_hex(va_args(args, int));

			if (input[i + 1] == 'X')
				char_count += ft_putnbr_HEX(va_args(args, int));
			
			if (input[i + 1] == '%')
				char_count += ft_putchar('%');

			i++;
			if (is_in_typelist(input[i]) == 0)
			{
				ft_putchar(input[i]);
				char_count++;
				i++;
			}
		}
	}
	va_end(args);
	return (char_count);
}
