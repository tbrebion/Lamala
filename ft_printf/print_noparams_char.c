/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_noparams_char.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:00:57 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/10 15:12:31 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_noparams_char(const char *input, int char_count, int i)
{
	while (input[i] != '%')
	{
		ft_putchar(input[i]);
		i++;
		char_count++;
	}
	if (input[i] == '\0')
		return (char_count);
}

