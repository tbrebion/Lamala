/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   messages.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 09:47:04 by tbrebion          #+#    #+#             */
/*   Updated: 2022/04/10 16:28:34 by tbrebion         ###   ########.fr       */
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

void	print_things(t_data *data, int id, char *str)
{
	pthread_mutex_lock(&data->writing);
	pthread_mutex_lock(&data->die_check);
	if (!data->died)
	{
		pthread_mutex_unlock(&data->die_check);
		printf("%lli ", timestamp() - data->first_timestamp);
		printf("%d ", id + 1);
		printf("%s\n", str);
	}
	else
		pthread_mutex_unlock(&data->die_check);
	pthread_mutex_unlock(&data->writing);
	return ;
}

void	print_one_things(long long time, int id, char *str)
{
	printf("%lli ", timestamp() - time);
	printf("%d ", id + 1);
	printf("%s\n", str);
	return ;
}
