/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:20:41 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/10 14:55:12 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	char_counter(const char *save, va_list args)
{
	int	i;
	int	len;

	i = 0;
	while (save[i])
	{
		while (save[i] != '%')
		{
			i++;
			len++;
		}
		if (save[i + 1] && is_in_typelist(save[i + 1]) == 1)
		{
			i++;
			if (save[i] == 'c' || save[i] == '%')
				len++;
			if (save[i] == 's' || save[i] == 'x'|| save[i] == 'X' || save[i] == 'p')
				len += ft_strlen(args);
			if (save[i] == 'i' || save[i] == 'd')
				len += nblen(args);
			if (save[i] == 'u')
				len += unblen(args);
			i++;
		}
		i++;
		len++;
	}
	return (len);
}
int	ft_printf(const char *input, ...)
{
	int		i;
	int		char_count;
	va_list		args;

	///////////////////////////  Types d'arguments
	char		c;
	char		*str;
	int		x;
	unsigned int	u;
	////////////////////////////

	va_start(args, input);
	i = 0;
	while (input[i])
	{
		while (input[i] != '%')
		{
			ft_putchar(input[i]);
			i++;
			char_count++;
		}
		if (input[i] == '%')
		{
			if (input[i + 1] == 'c')
			{
				c = (char)va_arg(args, int);
				ft_putchar(c);
				char_count += ft_putchar(c);
			}
			if (input[i + 1] == 's')
			{
				str = (char *)va_args(args, (char *));
				ft_putstr(str);
				char_count += ft_putstr(str);
			}
			if (input[i + 1] == 'p')
			{
				x = (int)va_args(args, (void *));
				ft_put_p(x);
				char_count += ft_put_p(x);
			}
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
}
