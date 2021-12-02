/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:38:45 by tbrebion          #+#    #+#             */
/*   Updated: 2021/11/26 16:15:46 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		j;
	char	*s;

	i = ft_strlen(str);
	j = 0;
	s = NULL;
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
