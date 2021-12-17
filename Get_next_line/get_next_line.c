/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 12:42:30 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/17 18:51:07 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_line(char *str)
{
	int	i;
	char	*res;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	res = malloc(sizeof(char) * i + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		res[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		res[i] == str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*get_next_line(int fd)
{
	static char	*buff;
	char		*res;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	return (res);
}
