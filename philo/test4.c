/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:06:47 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/17 16:23:51 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

long long	timestamp(void)
{
	struct timeval	t;

	if(gettimeofday(&t, NULL) == 0)
	{
		printf("sec --> %ld\nmsec --> %d\n\n", t.tv_sec, t.tv_usec);
		return ((t.tv_sec * 1000) + (t.tv_usec / 1000));
	}
	return (1);
}

int	main()
{
	long long i;

	i = timestamp();
	printf("time --> %lli\n\n", i);
	return (0);
}

