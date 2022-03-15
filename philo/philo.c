/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:49:41 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/15 16:26:06 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_philo	philo;
	//int		i;
	pthread_mutex_t	mutex;

	if (checker(av) == 1 && (ac == 5 || ac == 6))
	{
		init_av(ac, av, &philo);
		pthread_mutex_init(&mutex, NULL);
		//i = 0;
		create_philo(ac, av);
		pthread_mutex_destroy(&mutex);
	}
	ft_putstr_fd("ERROR\n", 2);
	return (0);
}
