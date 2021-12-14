/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:50:40 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/14 17:55:58 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_put_p(void *w)
{
	unsigned long int	p;
	int					res;

	res = 0;
	p = (unsigned long int)w;
	if (p > -2147483648 && p < 2147483647)
	{
		res += ft_putstr("0x");
		res += ft_putulnbr_hex(p);
		return (res);
	}
}
