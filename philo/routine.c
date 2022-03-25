/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:02:20 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/25 10:46:08 by tbrebion         ###   ########.fr       */
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
	t_philo	*philo;

	philo = (t_philo *)v_philo;
	data = philo->data;
	if (philo->id % 2 != 0)
		usleep(15000);
	while (data->died == 0)
	{
		eat_action(philo);
		if (data->all_ate)
			break ;
		print_things(data, philo->id, "is sleeping");
		wait_action(data->time_sleep, data);
		print_things(data, philo->id, "is thinking");
	}
	return (NULL);
}

void	check_death(t_data *data, t_philo *philo)
{
	int	i;

	while (data->all_ate == 0)
	{
		i = -1;
		while (++i < data->nb_philo && data->died == 0)
		{
			pthread_mutex_lock(&data->meal_check);
			if (timediff(philo[i].t_last_meal, timestamp()) > data->time_die)
			{
				print_things(data, philo->id, "died");
				data->died = 1;
			}
			pthread_mutex_unlock(&data->meal_check);
			usleep(100);
		}
		if (data->died)
			break ;
		i = 0;
		while (data->nb_eat != -1 && i < data->nb_philo
			&& philo[i].x_ate < data->nb_eat)
			i++;
		if (i == data->nb_philo)
			data->all_ate = 1;
	}
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
	check_death(data, philo);
	exit_manager(data, philo);
	return (0);
}
