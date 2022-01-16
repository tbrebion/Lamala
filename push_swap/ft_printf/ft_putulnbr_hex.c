/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putulnbr_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:15:18 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/16 14:56:12 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putulnbr_hex(unsigned long int nb)
{
	char	*hex;
	int		c;

	c = hex_len(nb);
	hex = "0123456789abcdef";
	if (nb == 16)
		return (ft_putstr("10"));
	if (nb > 16)
		ft_putulnbr_hex(nb / 16);
	ft_putchar(hex[nb % 16]);
	return (c);
}
