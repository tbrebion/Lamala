/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:49:41 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/17 14:05:23 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_data	data;
	//int		i;
	pthread_mutex_t	mutex;

	if (checker(av) == 1 && (ac == 5 || ac == 6))
	{
		init_all(av, &data);
		pthread_mutex_init(&mutex, NULL);
		//i = 0;
		if (create_philo(ac, av) == 0)
			return (0);
		pthread_mutex_destroy(&mutex);
	}
	ft_putstr_fd("ERROR\n", 2);
	return (0);
}
