/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 11:54:38 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/11 12:15:56 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*routine()
{
	printf("Test !\n");
	sleep(3);
	printf("ending threads \n");
	return (NULL);
}

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	pthread_t t1;
	pthread_t t2;

	if (pthread_create(&t1, NULL, &routine, NULL) != 0)
		return (1);
	if (pthread_create(&t2, NULL, &routine, NULL) != 0)
		return (2);
	if (pthread_join(t1, NULL) != 0)
		return (3);
	if (pthread_join(t2, NULL) != 0)
		return (4);
	return (0);
}
