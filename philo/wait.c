/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wait.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:27:45 by tbrebion          #+#    #+#             */
/*   Updated: 2022/04/05 14:55:05 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	wait_action(long long time, t_data *data)
{
	long long	i;

	i = timestamp();
	while (!data->died)
	{
		if (timediff(i, timestamp()) >= time)
			break ;
		usleep(50);
	}
}
