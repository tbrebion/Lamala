/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:20:41 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/09 13:27:28 by tbrebion         ###   ########.fr       */
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
		if (save[i + 1] && is_in_typelist(save[i + 1] == 1))
		{

		}
	}
	return (len);
}
int	ft_printf(const char *input, ...)
{
	int		i;
	int		char_count;
	const char	*save;
	va_list		args;

	va_start(args, input);
	i = 0;
	char_count = 0;
	save = ft_strdup(input);
	while (input[i])
	{
		while (input[i] != '%')
		{
			ft_putchar(input[i]);
			i++;
			if (input[i] == '\0')
				return (ft_strlen(input));
		}
		if (input[i] == '%')
		{
			if (input[i + 1] == 'c')
				ft_putchar(va_arg(args, int));
			if (input[i + 1] == 's')
				ft_putstr(va);
			if (input[i + 1] == 'p')

			if (input[i + 1] == 'd')
				ft_putnbr(nb);
			if (input[i + 1] == 'i')
				ft_putnbr(nb);
			if (input[i + 1] == 'u')

			if (input[i + 1] == 'x')

			if (input[i + 1] == 'X')

			if (input[i + 1] == '%')
				write (1, "%", 1);
			i++;	
		}
		i++;
	}
	va_end(args);
}
