/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bhex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:05:49 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/16 14:54:53 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_bhex(unsigned int nb)
{
	char			*hex;
	unsigned int	save;

	save = nb;
	hex = "0123456789ABCDEF";
	if (nb == 16)
		return (ft_putstr("10"));
	if (nb > 16)
	{
		ft_putnbr_bhex(nb / 16);
	}
	ft_putchar(hex[nb % 16]);
	return (hex_len(save));
}
