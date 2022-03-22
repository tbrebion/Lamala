/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   messages.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 09:47:04 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/22 16:18:07 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	error_message(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	write(2, "ERROR: ", 7);
	write(2, str, len);
	write(2, "\n", 1);
	return (1);
}

int	error_manager(int error)
{
	if (error == 1)
		return (error_message("At least one wrong arg"));
	if (error == 2)
		return (error_message("Error initialising mutex"));
	return (1);
}

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

void	display_message(int start, int end, int type, int id)
{
	printf("%lli %d, %s", timediff(start, end), id, message(type));
}
