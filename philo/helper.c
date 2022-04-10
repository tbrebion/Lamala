/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:11:10 by tbrebion          #+#    #+#             */
/*   Updated: 2022/04/10 16:24:08 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	routine_help(t_data *data, t_philo *philo)
{
	while (1)
	{
		pthread_mutex_lock(&data->die_check);
		if (data->died)
		{
			pthread_mutex_unlock(&data->die_check);
			break ;
		}
		pthread_mutex_unlock(&data->die_check);
		eat_action(philo);
		pthread_mutex_lock(&data->meal_check);
		if (data->all_ate)
		{
			pthread_mutex_unlock(&data->meal_check);
			break ;
		}
		pthread_mutex_unlock(&data->meal_check);
		print_things(data, philo->id, "is sleeping");
		wait_action(data->time_sleep);
		print_things(data, philo->id, "is thinking");
	}
}

void	death_helper(t_data *data, t_philo *philo, int i)
{
	while (++i < data->nb_philo && !(data->died))
	{
		pthread_mutex_lock(&data->meal_check);
		if (timediff(philo[i].t_last_meal, timestamp()) > data->time_die)
		{
			pthread_mutex_unlock(&data->meal_check);
			print_things(data, philo->id, "died");
			pthread_mutex_lock(&data->die_check);
			data->died = 1;
			pthread_mutex_unlock(&data->die_check);
		}
		else
			pthread_mutex_unlock(&data->meal_check);
		usleep(100);
	}
	pthread_mutex_lock(&data->meal_check);
}
