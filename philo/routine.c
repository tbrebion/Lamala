/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:02:20 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/24 11:52:51 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	eat_action(t_philo *philo)
{
	t_data	*data;

	data = philo->data;
	pthread_mutex_lock(&(data->fork_m[philo->left_fork_id]));
	print_things(data, philo->id, "has taken a fork");
	pthread_mutex_lock(&(data->fork_m[philo->right_fork_id]));
	print_things(data, philo->id, "has taken a fork");
	pthread_mutex_lock(&(data->meal_check));
	print_things(data, philo->id, "is eating");
	philo->t_last_meal = timestamp();
	pthread_mutex_unlock(&(data->meal_check));
	wait_action(data->time_eat, data);
	(philo->x_ate)++;
	pthread_mutex_unlock(&(data->fork_m[philo->left_fork_id]));
	pthread_mutex_unlock(&(data->fork_m[philo->right_fork_id]));
}

void	*routine(void *v_philo)
{
	t_data	*data;
	return (NULL);
}

void	exit_manager(t_data *data, t_philo *philo)
{
	int	i;

	i = -1;
	while (++i < data->nb_philo)
		pthread_join(philo[i].philo_th, NULL);
	i = -1;
	while (++i < data->nb_philo)
		pthread_mutex_destroy(&data->fork_m[i]);
	pthread_mutex_destroy(&data->writing);
	pthread_mutex_destroy(&data->meal_check);
}

int	manager(t_data *data)
{
	int		i;
	t_philo	*philo;

	i = 0;
	philo = data->philo;
	data->first_timestamp = timestamp();
	while (i < data->nb_philo)
	{
		if (pthread_create(&philo[i].philo_th, NULL, &routine, &philo[i]) != 0)
			return (1);
		philo[i].t_last_meal = timestamp();
		i++;
	}
	exit_manager(data, philo);
	return (0);
}
