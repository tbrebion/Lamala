/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:46:17 by tbrebion          #+#    #+#             */
/*   Updated: 2021/11/24 15:28:07 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*a1;
	unsigned char	*a2;

	i = 0;
	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	while ((a1[i] || a2[i]) && i < n)
	{
		if (a1[i] == a2[i])
			i++;
		else
			return (a1[i] - a2[i]);
	}
	return (0);
}
