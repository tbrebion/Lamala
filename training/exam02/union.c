/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:55:05 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/27 11:18:03 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	char	tab[265];
	int	i;
	int	k;

	i = -1;
	k = 0;
	while (s1[++i])
	{
		if (ft_strchr(tab, s1[i]) == 0)
		{
			write(1, &s1[i], 1);
			tab[k] = s1[i];
			k++;
		}
	}
	i = -1;
	while (s2[++i])
	{
		if (ft_strchr(tab, s2[i]) == 0)
		{
			write(1, &s2[i], 1);
			tab[k] = s2[i];
			k++;
		}
	}
	tab[k] = '\0';
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
