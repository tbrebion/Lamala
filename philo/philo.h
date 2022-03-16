/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 11:26:53 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/16 15:00:02 by tbrebion         ###   ########.fr       */
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
# include<limits.h>

typedef	struct	s_philo
{
	int	nb_philo;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	nb_eat;
}	t_philo;

long int		ft_atoi(const char *str);
void			ft_putstr_fd(char *s, int fd);
int				ft_isdigit(char c);

int				check_digit(char **av);
int				check_overflow(char **av);
int				checker(char **av);
void			init_av(int ac, char **av, t_philo *philo);

int				create_philo(int ac, char **av);

#endif
