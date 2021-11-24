/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:49:56 by tbrebion          #+#    #+#             */
/*   Updated: 2021/11/24 15:29:43 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	void	*a;
	void	*b;

	i = 0;
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	while (a[i] || i < len)
	{
		a[i] = b[i];
		i++;
	}
	a[i] = '\0';
	return (dst);
}
