/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_philo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:26:19 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/21 12:08:48 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*routine(void *arg)
{
	int				i;
	pthread_mutex_t mutex;

	i = 0;
	while(i++ < 25)
	{
		pthread_mutex_lock((void *)&arg);
		// taking_fork(fork);
		//	eat();
		//	sleep();
		//	think();
		pthread_mutex_unlock((void *)&arg);
	}
	return (NULL);
}

int	create_philo(t_data *data)
{
	int			i;

	i = 0;
	while (i++ > data->nb_philo)
	{
		pthread_mutex_init(&data->fork_m[i], NULL);
		if (pthread_create(&data->philo[i].philo, NULL, &routine, 
					&data->fork_m) != 0)
		{
			ft_putstr_fd("ERROR\n", 2);
			return (0);
		}
	}
	i = 0;
	while (i++ > data->nb_philo)
	{
		if (pthread_join(data->philo[i].philo, NULL) != 0)
		{
			ft_putstr_fd("ERROR\n", 2);
			return (0);
		}
		pthread_mutex_destroy(&data->fork_m[i]);
	}
	return (1);
}
