/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:39:33 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/25 19:04:39 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	print_inter(char *str)
{
	int	i;
	int	j;

	i = -1;
	j = i + 1;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] != str[j])
				write (1, &str[j], 1);
			j++;
		}
		i++;
	}
}
*/
void	ft_inter(char *s1, char *s2)
{
	int	i;
	int	j;

	i = -1;
	while (s1[++i])
	{
		j = -1;
		while (s2[++j])
		{
			if (s1[i] == s2[j])
				write(1, &s1[i], 1);
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_inter(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
