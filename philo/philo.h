/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 11:26:53 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/14 16:16:31 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include<string.h>
# include<unistd.h>
# include<stdlib.h>
# include<stdio.h>
# include<sys/time.h>
# include<pthread.h>

typedef	struct	s_philo
{
	int	number_of_philosophers;
	int	time_to_eat;
	int	time_to_sleep;
	int	time_to_die;
}	t_philo;

int		ft_atoi(const char *str);
void	ft_putstr_fd(char *s, int fd);
void	create_philo(int ac, char **av, pthread_mutex_t mutex);

#endif
