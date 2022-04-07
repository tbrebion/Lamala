/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wait.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:27:45 by tbrebion          #+#    #+#             */
/*   Updated: 2022/04/07 15:19:26 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	wait_action(long long time, t_data *data)
{
	long long	i;

	pthread_mutex_lock(&(data->meal_check));
	i = timestamp();
	while (!(data->died))
	{
		if (timediff(i, timestamp()) >= time)
			break ;
		usleep(50);
	}
	pthread_mutex_unlock(&(data->meal_check));
}
