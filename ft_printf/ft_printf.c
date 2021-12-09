/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:20:41 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/09 15:27:23 by tbrebion         ###   ########.fr       */
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
			if (save[i] == 'i' || save[i] == 'd' || save[i] == 'u')
				len += nlen(args);
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

	va_start(args, input);
	i = 0;
	char_count = char_counter(input, args);
	while (input[i])
	{
		while (input[i] != '%')
		{
			ft_putchar(input[i]);
			i++;
		}
		if (input[i] == '%')
		{
			if (input[i + 1] == 'c')
			{
				ft_putchar(va_arg(args, int));
				char_count += char_counter(input, args);
			}
			if (input[i + 1] == 's')
			{
				ft_putstr(va);
				char_count += char_counter(input, args);
			}
			if (input[i + 1] == 'p')
			{

				char_count += char_counter(input, args);
			}
			if (input[i + 1] == 'd')
			{
				ft_putnbr(nb);
				char_count += char_counter(input, args);
			}
			if (input[i + 1] == 'i')
			{
				ft_putnbr(nb);
				char_count += char_counter(input, args);
			}
			if (input[i + 1] == 'u')
			{
				char_count += char_counter(input, args);
			}
			if (input[i + 1] == 'x')
			{
				char_count += char_counter(input, args);
			}
			if (input[i + 1] == 'X')
			{
				char_count += char_counter(input, args);
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
