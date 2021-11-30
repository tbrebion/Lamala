/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:28:11 by tbrebion          #+#    #+#             */
/*   Updated: 2021/11/26 16:17:47 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	int		j;
	char	*s;	

	i = 0;
	j = 0;
	s = NULL;
	while (str[i] != c)
		i++;
	if (str[i] == '\0')
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
