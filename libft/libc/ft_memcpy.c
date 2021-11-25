/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:23:59 by tbrebion          #+#    #+#             */
/*   Updated: 2021/11/25 12:08:53 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	*ft_memcpy(void *dst, const void *scr, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	a[i] = '\0';
	dst = a;
	return (dst);
}
