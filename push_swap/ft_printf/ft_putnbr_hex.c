/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:05:30 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/30 18:02:24 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned int nb)
{
	char				*hex;
	unsigned int		save;
	int					c;

	c = 0;
	save = nb;
	hex = "0123456789abcdef";
	if (nb > 15)
	{
		ft_putnbr_hex(nb / 16);
	}
	ft_putchar(hex[nb % 16]);
	c += hex_len(save);
	return (c);
}
