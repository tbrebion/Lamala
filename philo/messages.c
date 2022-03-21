/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   messages.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 09:47:04 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/21 10:37:16 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

char *message(int type)
{
	if (type == EAT)
		return (" is eating\n");
	if (type == SLEEP)
		return (" is sleeping\n");
	if (type == FORK)
		return (" has taken a fork\n");
	if (type == THINK)
		return (" is thinking\n");
	return (" died\n");
}


