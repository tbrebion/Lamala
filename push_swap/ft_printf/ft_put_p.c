/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:50:40 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/16 14:55:27 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_p(void *w)
{
	unsigned long int	p;

	if (!w)
		return (ft_putstr("0x0"));
	p = (unsigned long int)w;
	ft_putstr("0x");
	return (ft_putulnbr_hex(p) + 2);
}
