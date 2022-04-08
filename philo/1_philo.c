/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_philo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:15:18 by tbrebion          #+#    #+#             */
/*   Updated: 2022/04/08 13:12:57 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*one_routine()
{
	print_things(data, philo->id, "died");
}

int	one_philo(t_data *data)
{
	t_philo		*philo;

	philo = data->philo;	
	data->first_timestamp = timestamp();
	if (pthread_create(&philo[0].philo_th, NULL, &one_routine, NULL))
		return (1);
}