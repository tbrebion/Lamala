/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:58:07 by tbrebion          #+#    #+#             */
/*   Updated: 2021/11/26 18:46:56 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t		i;
	size_t		j;
	char		*res;

	i = 0;
	j = 0;
	res = (char *)str;
	if (to_find == NULL || *to_find == '\0')
		return ((char *)str);
	while (str[i] != to_find[j])
		i++;
	while ((str[i] == to_find[j]) && j < n)
	{
		res[j] = str[i];
		i++;
		j++;
	}
	if (to_find[j] != '\0' && (j != n - 1))
		return (NULL);
	return (res);
}
