/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:49:41 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/14 15:22:27 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_philo	philo;
	int		i;
	pthread_mutex_t	mutex;

	//check_init();
	pthread_mutex_init(&mutex, NULL);
	i = 0;
	if (ac == 5)
	{
		create_philo(ac, av, mutex);
	}
	pthread_mutex_destroy(&mutex);
	return (0);
}
