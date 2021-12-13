/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_HEX.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:05:49 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/13 18:16:35 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_bhex(unsigned long int nb)
{
	char		*hex;
	long int	save;

	save = nb;
	hex = "0123456789ABCDEF";
	if (nb > 16)
	{
		ft_putnbr_bhex(nb / 16);
	}
	ft_putchar(hex[nb % 16]);
	return (hex_len(save));
}
