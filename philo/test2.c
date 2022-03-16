/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:42:25 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/16 12:13:28 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <time.h>

void	*roll_dice()
{
	int	value;
	int	*result;

	value = (rand() % 6) + 1;
	result = malloc(sizeof(int));
	if (!result)
		return (NULL);
	*result = value;
	return ((void *)result);
}

int	main(void)
{
	int	*res;
	pthread_t th;

	srand(time(NULL));
	if (pthread_create(&th, NULL, &roll_dice, NULL) != 0)
		return (1);
	if (pthread_join(th, (void **)&res) != 0)
		return (2);
	printf("Result --> %d\n", *res);
	free(res);
	return (0);
}
