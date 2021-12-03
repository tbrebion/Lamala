/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:44:30 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/03 16:40:42 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*res;

	i = 0;
	j = 0;
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		res[i] = '\0';
		return (res);
	}
	while (i < start)
		i++;
	while (s[i] && j < len)
	{
		res[j] = s[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}
