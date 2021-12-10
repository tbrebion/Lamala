/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:05:30 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/10 18:28:03 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_hex(int nb)
{
	char	*hex;
	int	i;

	i = 0;
	hex = "0123456789abcdef";
	if (nb > 16)
	{
		ft_putnbr_hex(nb / 16);
		i++;
	}
	ft_putchar(hex[nb % 16]);
	return (i);
}

#include <limits.h>
#include <stdio.h>

int	main()
{
	ft_putnbr_hex(0);
	ft_putchar('\n');
	ft_putnbr_hex(42);
	ft_putchar('\n');
	ft_putnbr_hex(-42);
	ft_putchar('\n');
	ft_putnbr_hex(INT_MAX);
	ft_putchar('\n');
	ft_putnbr_hex(INT_MIN);
	ft_putchar('\n');
	ft_putnbr(ft_putnbr_hex(INT_MAX));
	ft_putchar('\n');
	ft_putnbr(ft_putnbr_hex(-42));
	ft_putchar('\n');
	ft_putnbr(ft_putnbr_hex(42));
	ft_putchar('\n');
	ft_putnbr(ft_putnbr_hex(0));
	ft_putchar('\n');
	ft_putnbr(ft_putnbr_hex(INT_MIN));
	ft_putchar('\n');
	return (0);
}
