/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 11:54:38 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/14 16:13:19 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	mails = 0;
pthread_mutex_t mutex;

void	*routine()
{
	int	i;

	for(i = 0; i < 10000000; i++)
	{
		pthread_mutex_lock(&mutex);
		mails++;
		pthread_mutex_unlock(&mutex);
	}
	return (NULL);
}

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	pthread_t	th[8];
	int			i;

	i = 0;
	pthread_mutex_init(&mutex, NULL);
	for(i = 0; i < 8; i++)
	{
		if (pthread_create(&th[i], NULL, &routine, NULL) != 0)
		{
			perror("failed to create\n");
			return (1);
		}
		printf("Thread %d has started\n", i);
	}
	for(i = 0; i < 8; i++)
	{
		if (pthread_join(th[i], NULL) != 0)
		{
			perror("failed to join\n");
			return (1);
		}
		printf("Thread %d has finished execution\n", i);
	}
	pthread_mutex_destroy(&mutex);
	printf("Number of mails : %d\n", mails);
	return (0);
}
