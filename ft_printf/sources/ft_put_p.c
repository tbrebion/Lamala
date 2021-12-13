/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:50:40 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/13 18:12:02 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_put_p(void *w)
{
	unsigned long int	p;
	int					res;

	res = 0;
	p = (unsigned long int)w;
	ft_putstr("0x");
	res += 2;
	res += ft_putnbr_hex(p);
	return (res);
}
