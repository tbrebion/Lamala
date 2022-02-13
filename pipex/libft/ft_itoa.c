/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:23:02 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/06 12:02:04 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	nlen(int n)
{
	long int	res;

	res = 0;
	if (n >= 0 && n <= 9)
	{
		res = 1;
		return (res);
	}
	if (n < 0)
		res = 1;
	while (n > 9 || n < -9)
	{
		n = n / 10;
		res++;
	}
	res++;
	return (res);
}

static char	*nb_convert(char *a, unsigned int nb, long int len)
{
	while (nb > 0)
	{
		a[len--] = 48 + (nb % 10);
		nb = nb / 10;
	}
	return (a);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		size;

	size = nlen(n);
	res = malloc(sizeof(char) * (size + 1));
	if (res == NULL)
		return (NULL);
	res[size--] = '\0';
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	res = nb_convert(res, n, size);
	return (res);
}
