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
	char	*res;

	(int)p = &w;
	hex = "0123456789abcdef";
	if (p > 16)
		ft_putnbr_hex(p / 16);
	res = hex[nb % 16];
	ft_putchar(hex[p % 16]);
	res[ft_strlen(res)] = '\0';
	return (ft_strlen(res));
}
