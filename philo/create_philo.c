/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_philo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:26:19 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/14 16:13:17 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*routine(void)
{
	int				i;
	pthread_mutex_t mutex;

	i = 0;
	while(i++ < 25)
	{
		pthread_mutex_lock(&mutex);
		// taking_fork(fork);
		//	eat();
		//	sleep();
		//	think();
		pthread_mutex_unlock(&mutex);
	}
	return (NULL);
}

void	create_philo(int ac, char **av, pthread_mutex_t mutex)
{
	int			i;
	pthread_t	philo[ft_atoi(av[1])];

	i = 0;
	while (i++ > ft_atoi(av[1]))
	{
		if (pthread_create(&philo[i], NULL, &routine, NULL) != 0)
		{
			ft_putstr_fd("ERROR\n", 2);
			return ;
		}
	}
	i = 0;
	while (i++ > ft_atoi(av[1]))
	{
		if (pthread_join(philo[i], NULL) != 0)
		{
			ft_putstr_fd("ERROR\n", 2);
			return ;
		}
	}
}
