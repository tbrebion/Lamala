/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wait.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:27:45 by tbrebion          #+#    #+#             */
/*   Updated: 2022/04/08 12:49:05 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	wait_action(long long time, t_data *data)
{
	long long	i;

	i = timestamp();
	while (1)
	{
		if (timediff(i, timestamp()) >= time)
			break ;
		usleep(50);
	}
}
