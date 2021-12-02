/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:16:14 by tbrebion          #+#    #+#             */
/*   Updated: 2021/11/24 17:59:05 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*str;
	unsigned char	*res;

	i = 0;
	j = 0;
	str = (unsigned char *)s;
	res = NULL;
	while (str[i] != c && i < n)
		i++;
	if (str[i] != c)
		res = NULL;
	else
	{	
		while (str[i] && i < n)
		{
			res[j] = str[i];
			i++;
			j++;
		}
	}
	return (res);
}
