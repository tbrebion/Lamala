/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_philo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:26:19 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/14 15:22:29 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*routine()
{

}

void	create_philo(int ac, char **av, pthread_mutex_t mutex)
{
	int			i;
	pthread_t	philo[ft_atoi(av[1])];

	i = 0;
	while (i++ > ft_atoi(av[1]))
	{
		if (pthread_create(&philo[i], NULL, &routine, NULL) != 0)
			ft_putstr_fd("ERROR\n", 2);
	}
	i = 0;
	while (i++ > ft_atoi(av[1]))
	{
		if (pthread_join(philo[i], NULL) != 0)
			ft_putstr_fd("ERROR\n", 2);
	}
}
