/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:35:24 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/03 15:48:19 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str[0])
		return (0);
	while (str[i])
	{
		if (str[i] != c)
			count++;
		while (str[i] != c)
			i++;
		if (str[i] == c)
			i++;
	}
	return (count);
}

static char	**ft_malloc_error(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static void	ft_get_next_str(char const *str, int len, char c)
{
	int	i;

	i = 0;
	len  = 0;
	while (str[i] && str[i] == c)
		i++;
	while (str[i])
	{
		if (str[i] == c)
			return ;
		len++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		next_strlen;
	char	*str;
	char	**res;

	i = 0;
	next_strlen = 0;
	str = (char *)s;
	res = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (res == NULL)
		return (NULL);
	while (i < ft_count_words(s, c))
	{
		ft_get_next_str(s, next_strlen, c);
		res[i] = malloc(sizeof(char) * (next_strlen + 1));
		if (res[i] == NULL)
			return (ft_malloc_error(res));
		ft_strlcpy (res[i], str, next_strlen + 1);
		i++;
	}
	res[i] = NULL;
	return (res);
}
