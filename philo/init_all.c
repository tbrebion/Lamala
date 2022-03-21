/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_av.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:42:34 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/21 12:14:00 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	init_philo(t_data *data)
{
	int	i;

	i = data->nb_philo;
	while (--i >= 0)
	{
		data->philo[i].id = i;
		data->philo[i].x_ate = 0;
		data->philo[i].left_fork_id = i;
		data->philo[i].right_fork_id = (i + 1) % data->nb_philo;
	}
}

int	init_mutex(t_data *data)
{
	
}

int	init_all(char **av, t_data *data)
{
		data->nb_philo = ft_atoi(av[1]);
		data->time_die = ft_atoi(av[2]);
		data->time_eat = ft_atoi(av[3]);
		data->time_sleep = ft_atoi(av[4]);
		data->all_ate = 0;
		data->died = 0;
		if (data->nb_philo > 250 || data->nb_philo < 2 || data->time_die < 0 ||
				data->time_eat < 0 || data->time_sleep < 0)
			return (1);
		if (av[5])
		{
			data->nb_eat = ft_atoi(av[5]);
			if (data->nb_eat <= 0)
				return (1);
		}
		else
			data->nb_eat = -1;
		//init mutex
		init_philo(data);
		return (0);
}
