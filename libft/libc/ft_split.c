/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:35:24 by tbrebion          #+#    #+#             */
/*   Updated: 2021/11/25 20:17:35 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

int	ft_count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
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

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	k;
	char	*temp;
	char	**res;

	i = 0;
	j = 0;
	k = 0;
	res = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (res == NULL)
		return (NULL);
	while (s[j])
	{
		while (s[j] == c)
			j++;
		while (s[j] != c)
		{	
			temp[k] = s[j];
			j++;
			k++;
		}
		temp[k] = '\0';
		res[i] = ft_strdup(temp);
		k = 0;
		i++;
	}
	res[i] = NULL;
	return (res);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	int	i;
	char 	**tab;

	i = 0;
	tab = ft_split(av[1], av[2][0]);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
