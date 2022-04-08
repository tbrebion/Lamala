/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:49:41 by tbrebion          #+#    #+#             */
/*   Updated: 2022/04/08 16:09:47 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_data		data;
	int			ret;
	long long	first_time;

	if (ac != 5 && ac != 6)
		return (error_message("Wrong amount of args"));
	if (checker(av) == 0)
		return (error_message("At least one wrong arg"));
	if (ft_atoi(av[1]) == 1)
	{
		first_time = timestamp();
		one_routine(first_time, (long long)ft_atoi(av[2]));
		return (0);
	}
	ret = init_all(av, &data);
	if (ret != 0)
		return (error_manager(ret));
	if (manager(&data) != 0)
		return (error_message("Problem creating threads"));
	return (0);
}
