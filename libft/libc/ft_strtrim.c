/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:03:28 by tbrebion          #+#    #+#             */
/*   Updated: 2021/11/25 20:13:37 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

int	ft_isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_trimlen(char const *str, char const *set)
{
	int	i;
	int	j;
	int	k;
	int	res;

	i = 0;
	j = 0;
	k = ft_strlen(str) - 1;
	while (ft_isset(str[j], set) == 1)
		j++;
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
	int		res_size;
	int		i;
	int		j;

	i = 0;
	j = 0;
	res_size = ft_trimlen(s1, set);
	str = malloc(sizeof(char) * (res_size + 1));
	while (ft_isset(s1[i], set) == 1)
		i++;
	while (i < res_size)
	{
		res[j] = s1[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}
