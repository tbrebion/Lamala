/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:38:45 by tbrebion          #+#    #+#             */
/*   Updated: 2021/11/24 15:32:52 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*strrchr(const char *str, int c)
{
	int		i;
	int		j;
	char	*s;

	i = ft_strlen(str);
	j = 0;
	while (str[i] != c)
		i--;
	if (i == 0)
		return (NULL);
	while (str[i])
	{
		s[j] = str[i];
		i++;
		j++;
	}
	s[j] = '\0';
	return (s);
}
