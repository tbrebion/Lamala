/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:20:41 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/13 18:17:19 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	int		i;
	int		char_count;
	va_list	args;

	va_start(args, input);
	i = 0;
	char_count = 0;
	while (input[i])
	{
		if (input[i] == '%')
		{
			if (input[i + 1] == 'c')
				char_count += ft_putchar(va_arg(args, int));
			if (input[i + 1] == 's')
				char_count += ft_putstr(va_arg(args, char *));
			if (input[i + 1] == 'p')
				char_count += ft_put_p(va_arg(args, void *));
			if (input[i + 1] == 'i' || input[i + 1] == 'd')
				char_count += ft_putnbr(va_arg(args, int));
			if (input[i + 1] == 'u')
				char_count += ft_putunbr(va_arg(args, unsigned int));
			if (input[i + 1] == 'x')
				char_count += ft_putnbr_hex(va_arg(args, unsigned long int));
			if (input[i + 1] == 'X')
				char_count += ft_putnbr_bhex(va_arg(args, unsigned long int));
			if (input[i + 1] == '%')
				char_count += ft_putchar('%');
			i++;
		}
		else
			char_count += ft_putchar(input[i]);
		i++;
	}
	va_end(args);
	return (char_count);
}
