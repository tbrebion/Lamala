/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:20:41 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/08 20:47:16 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	int	i;
	char	*res;
	va_list	ap;

	va_start(ap, input);
	i = 0;
	res = input;
	while (i < ft_strlen(res))
	{
		while (res[i] != '%')
		{
			ft_putchar(res[i]);
			i++;
		}
		if (res[i] == '%')
		{
			if (res[i + 1] == 'c')
				ft_putchar(c);
			if (res[i + 1] == 's')
				ft_putstr(str);
			if (res[i + 1] == 'p')

			if (res[i + 1] == 'd')
				ft_putnbr(nb);
			if (res[i + 1] == 'i')
				ft_putnbr(nb);
			if (res[i + 1] == 'u')

			if (res[i + 1] == 'x')

			if (res[i + 1] == 'X')

			if (res[i + 1] == '%')
				write (1, "%", 1);
			i++;	
		}
		i++;
	}
}
