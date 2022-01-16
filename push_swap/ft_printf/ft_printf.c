/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:20:41 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/16 14:53:53 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(va_list args, const char format)
{
	int	c_count;

	c_count = 0;
	if (format == 'c')
		c_count += ft_putchar(va_arg(args, int));
	else if (format == 's')
		c_count += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		c_count += ft_put_p(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		c_count += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		c_count += ft_putunbr(va_arg(args, unsigned int));
	else if (format == 'x')
		c_count += ft_putnbr_hex(va_arg(args, unsigned int));
	else if (format == 'X')
		c_count += ft_putnbr_bhex(va_arg(args, unsigned int));
	else if (format == '%')
		c_count += ft_putchar('%');
	return (c_count);
}

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
			char_count += print_format(args, input[i + 1]);
			i++;
		}
		else
			char_count += ft_putchar(input[i]);
		i++;
	}
	va_end(args);
	return (char_count);
}
