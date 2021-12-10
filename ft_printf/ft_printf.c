/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:20:41 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/10 15:43:37 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	int		i;
	int		char_count;
	va_list		args;

	///////////////////////////  Types d'arguments
	char		*str;
	int		x;
	unsigned int	u;
	////////////////////////////

	va_start(args, input);
	i = 0;
	while (input[i])
	{
		print_noparams_char(input, char_count, i);
		if (input[i] == '%')
		{
			display_char(input, i, char_count, x, args);

			/*if (input[i + 1] == 'c')
			{
				x = (int)va_arg(args, int);
				ft_putchar(x);
				char_count += ft_putchar(x);
			}*/
			display_string(input, i, char_count, str, args);

			/*if (input[i + 1] == 's')
			{
				str = (char *)va_args(args, (char *));
				ft_putstr(str);
				char_count += ft_putstr(str);
			}*/
			display_p(input, i, char_count, x, args);

			/*if (input[i + 1] == 'p')
			{
				x = (int)va_args(args, (void *));
				ft_put_p(x);
				char_count += ft_put_p(x);
			}*/
			

			if (input[i + 1] == 'd')
			{
				x = (int)va_args(args, int);
				ft_putnbr(x);
				char_count += ft_putnbr(x);
			}
			if (input[i + 1] == 'i')
			{
				x = (int)va_args(args, int);
				ft_putnbr(x);
				char_count += ft_putnbr(x);
			}
			if (input[i + 1] == 'u')
			{
				u = (unsigned int)va_args(args, int);
				ft_putunbr(u);
				char_count += ft_putunbr(u);
			}
			if (input[i + 1] == 'x')
			{
				x = (int)va_args(args, int);
				ft_putnbr_hex(x);
				char_count += ft_putnbr_hex(x);
			}
			if (input[i + 1] == 'X')
			{
				x = (int)va_args(args, int);
				ft_putnbr_HEX(x);
				char_count += putnbr_HEX(x);
			}
			if (input[i + 1] == '%')
			{
				write (1, "%", 1);
				char_count++;
			}
			i++;	
		}
		i++;
	}
	va_end(args);
	return (char_count);
}
