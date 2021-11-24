/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:58:07 by tbrebion          #+#    #+#             */
/*   Updated: 2021/11/24 15:39:07 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t		i;
	size_t		j;
	char	*res;

	i = 0;
	j = 0;
	if (to_find == "")
		return (str);
	while (str[i] != to_find(j))
		i++;
	while ((str[i] == to_find[j]) && j < n)
	{
		res[j] = str[i];
		i++;
		j++;
	}
	if (to_find[j] != '\0' && (j != n - 1))
		return (NULL);
	while (str[i])
	{
		res[j] = str[i];
		i++;
		j++;
	}
	return (res);
}
