/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:02:20 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/22 15:18:45 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	action(t_philo *philo)
{
	t_data	*data;

	data = philo->data;
	pthread_mutex_lock(&(data->fork_m[philo->left_fork_id]));
	//MESSAGE
	pthread_mutex_lock(&(data->fork_m[philo->right_fork_id]));
	//MESSAGE
	timestamp();
	//pthread_mutex_lock();
	
}
