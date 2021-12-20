/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 12:42:30 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/20 17:51:39 by tbrebion         ###   ########.fr       */
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
	res = malloc(sizeof(char) * i + 2);
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
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*new_str(char *str)
{
	char	*new_str;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	new_str = malloc(sizeof(char) * ft_strlen(str) - i + 1);
	if (!new_str)
		return (NULL);
	i++;
	while (str[i])
		new_str[j++] = str[i++];
	new_str[j] = '\0';
	free(str);
	return (new_str);
}

char	*get_save(int fd, char *left_str)
{
	char	*save;
	int		size;

	save = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!save)
		return (NULL);
	size = 1;
	while (!ft_strchr(left_str, '\n') && size != 0)
	{
		size = read(fd, save, BUFFER_SIZE);
		if (size == -1)
		{
			free(save);
			return (NULL);
		}
		save[size] = '\0';
		left_str = ft_strjoin(left_str, save);
	}
	free(save);
	return (left_str);
}

char	*get_next_line(int fd)
{
	static char	*buff;
	char		*res;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = get_save(fd, buff);
	if (!buff)
		return (NULL);
	res = get_line(buff);
	buff = new_str(buff);
	return (res);
}
