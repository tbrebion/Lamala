/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:57:26 by tbrebion          #+#    #+#             */
/*   Updated: 2021/11/24 13:29:41 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = malloc(size * n);
	if (str == NULL)
		return (NULL);
	if (n == 0 || size == 0)
		return (NULL);
	if ((n * size) > 2147483647 || (n * size) < -2147483648)
		return (NULL);
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
	str[i] = '\0';
	return (str);
}
