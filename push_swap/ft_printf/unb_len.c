/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unb_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:09:45 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/16 14:56:58 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	unb_len(unsigned int n)
{
	int	res;

	res = 0;
	if (n <= 9)
	{
		res = 1;
		return (res);
	}
	while (n > 9)
	{
		n = n / 10;
		res++;
	}
	res++;
	return (res);
}
