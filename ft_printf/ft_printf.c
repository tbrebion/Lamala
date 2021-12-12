/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:20:41 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/10 18:48:09 by tbrebion         ###   ########.fr       */
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
		if (print_noparams_char(input, char_count, i) == 0)
			return (char_count);
		if (input[i] == '%')
		{
			if (input[i + 1] == 'c')
				char_count += ft_putchar((int)va_args(args, int));

			if (input[i + 1] == 's')

			display_string(input, i, char_count, str, args);

			display_p(input, i, char_count, x, args);

			display_nb(input, i, char_count, x, args);

			display_unb(input, i, char_count, u, args);

			display_hex(input, i, char_count, x, args);

			display_HEX(input, i, char_count, x, args);

			display_pc(input, i, char_count);

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
