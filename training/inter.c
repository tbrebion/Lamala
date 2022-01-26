/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:39:33 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/26 14:17:53 by tbrebion         ###   ########.fr       */
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

void	ft_inter(char *s1, char *s2)
{
	char	tab[256];
	int	i;
	int	j;
	int	k;

	i = -1;
	k = 0;
	while (s1[++i])
	{
		j = -1;
		while (s2[++j])
		{
			if (s1[i] == s2[j] && ft_strchr(tab, s1[i]) == 0)
			{
				write(1, &s1[i], 1);
				tab[k] = s1[i];
				k++;
			}
		}
	}
	tab[k] = '\0';
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_inter(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
