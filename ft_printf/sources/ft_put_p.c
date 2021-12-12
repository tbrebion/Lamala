/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:50:40 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/10 14:47:59 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_put_p(int w)
{
	void	*p;
	char	*hex;

	(int)p = &w;
	hex = "0123456789abcdef";
	if (p > 16)
		ft_putnbr_hex(p / 16);
	ft_putchar(hex[p % 16]);
}
