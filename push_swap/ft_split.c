/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:35:24 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/23 16:05:44 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_char(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

void	malloc_error(char **tab, int len)
{
	int	i;

	i = 0;
	while (i <= len + 1)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

char	*new_strdup(char const *str, char c)
{
	int		i;
	char	*res;

	i = 0;
	res = malloc(sizeof(char) * (count_char(str, c) + 1));
	if (res == NULL)
		return (NULL);
	while (str[i] && str[i] != c)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

void	for_my_split(char **res, char const *s, char c, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < len)
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			res[j] = new_strdup(&s[i], c);
			if (res[j] == NULL)
			{	
				malloc_error(res, len);
				return ;
			}
			i += count_char(&s[i], c);
			j++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	res[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	char	**res;

	i = 0;
	len = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			len++;
		while (s[i] && s[i] != c)
			i++;
	}
	res = malloc(sizeof(char *) * (len + 1));
	if (res == NULL)
		return (NULL);
	for_my_split(res, s, c, len);
	return (res);
}
