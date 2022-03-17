/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:35:36 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/17 11:24:17 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <time.h>

int	primes[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

void	*routine(void *arg)
{
	int	index;
	int	sum;
	int	j;

	index = *(int *)arg;
	sum = 0;
	j = 0;
	while (j < 5)
	{
		sum += primes[index + j];
		j++;
	}
	printf("local sum %d\n\n", sum);
	*(int *)arg = sum;
	return (arg);
}

int	main(void)
{
	pthread_t	th[2];
	int			i;
	int			*a;
	int			globalSum;

	i = 0;
	while(i < 2)
	{
		a = malloc(sizeof(int));
		*a = i * 5;
		if (pthread_create(&th[i], NULL, &routine, a) != 0)
			return (1);
		i++;
	}
	i = 0;
	globalSum = 0;
	while(i < 2)
	{
		int			*r;
		if (pthread_join(th[i], (void **)&r) != 0)
			return (2);
		globalSum += *r;
		free(r);
		i++;
	}
	printf("global sum %d\n", globalSum);
	return (0);
}
