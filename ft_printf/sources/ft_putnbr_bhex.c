/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_HEX.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:05:49 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/04 14:20:21 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_bhex(unsigned int nb)
{
	char			*hex;
	unsigned int	save;

	save = nb;
	hex = "0123456789ABCDEF";
	if (nb > 15)
	{
		ft_putnbr_bhex(nb / 16);
	}
	ft_putchar(hex[nb % 16]);
	return (hex_len(save));
}
