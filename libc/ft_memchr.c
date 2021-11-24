/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:16:14 by tbrebion          #+#    #+#             */
/*   Updated: 2021/11/24 11:33:17 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*str;
	unsigned char	*res;

	i = 0;
	j = 0;
	str = (unsigned char *)s;
	while (str[i] != c && i < n)
		i++;
	if (str[i] != c)
		res = NULL;
	else
		while (str[i] && i < n)
		{
			res[j] = str[i];
			i++;
			j++;
		}
	return (res);
}
