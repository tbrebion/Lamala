/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:03:28 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/03 17:16:48 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_isset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_trimlen(char const *str, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	res;

	i = 0;
	j = 0;
	k = ft_strlen(str) - 1;
	while (ft_isset(str[j], set) == 1)
		j++;
	if (str[j] == '\0')
		return (0);
	while (ft_isset(str[k], set) == 1)
	{
		k--;
		i++;
	}
	res = ft_strlen(str) - i - j;
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	res_size;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	res_size = ft_trimlen(s1, set);
	res = malloc(sizeof(char) * (res_size + 1));
	if (res == NULL)
		return (NULL);
	while (ft_isset(s1[i], set) == 1)
		i++;
	while (j < res_size)
	{
		res[j] = s1[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}
