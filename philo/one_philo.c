/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_philo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:15:18 by tbrebion          #+#    #+#             */
/*   Updated: 2022/04/10 16:28:54 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	one_routine(long long first_time, long long time_die)
{
	long long	time;

	print_one_things(first_time, 0, "has taken a fork");
	wait_action(time_die);
	print_one_things(first_time, 0, "died");
}
