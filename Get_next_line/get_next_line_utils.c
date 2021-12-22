/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 17:11:53 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/22 17:27:11 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (str)
	{	
		while (str[i])
			i++;
	}
	return (i);
}

char	*ft_strchr(const char *str, char c)
{
	char	*s;

	s = (char *)str;
	while (*s != c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return (s);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	int		k;
	char	*res;

	i = 0;
	j = 0;
	k = 0;
	if (!s2)
		return (NULL);
	res = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (res == NULL)
		return (NULL);
	if (s1)
	{	
		while (s1[i])
			res[k++] = s1[i++];
	}
	while (s2[j])
		res[k++] = s2[j++];
	res[k] = '\0';
	free(s1);
	return (res);
}
