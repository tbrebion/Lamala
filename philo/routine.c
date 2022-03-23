/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:02:20 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/23 11:52:20 by tbrebion         ###   ########.fr       */
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
	//sleep();  JE COMPREND PAS
	(philo->x_ate)++;
	pthread_mutex_unlock(&(data->fork_m[philo->left_fork_id]));
	pthread_mutex_unlock(&(data->fork_m[philo->right_fork_id]));
}

void	routine(t_philo *philo)
{
	t_data	*data;

	data = philo->data;
	if((data->nb_philo % 2) == 0) //pair
	{

	}
	else //impair
	{

	}
}
