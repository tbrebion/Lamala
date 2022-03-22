/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 11:26:53 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/22 16:18:12 by tbrebion         ###   ########.fr       */
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

# define EAT 0
# define SLEEP 1
# define FORK 2
# define THINK 3
# define DIED 4

struct	s_data;

typedef	struct	s_philo
{
	int				id;
	int				x_ate;
	int				left_fork_id;
	int				right_fork_id;
	struct s_data	*data;
	pthread_t		philo;
	long long		t_last_meal;
}	t_philo;

typedef	struct	s_data
{
	int				nb_philo;
	int				time_die;
	int				time_eat;
	int				time_sleep;
	int				nb_eat;
	int				all_ate;
	int				died;
	struct s_philo	philo[250];
	long long		first_timestamp;;
	pthread_mutex_t	fork_m[250];
	pthread_mutex_t	writing;
	pthread_mutex_t	meal_check;
}	t_data;

long int		ft_atoi(const char *str);
void			ft_putstr_fd(char *s, int fd);
int				ft_isdigit(char c);
long long		timestamp(void);
long long		timediff(long long start, long long end);

int				check_digit(char **av);
int				check_overflow(char **av);
int				checker(char **av);

int				error_message(char *str);
int				error_manager(int error);
char			*message(int type);
void			display_message(int start, int end, int type, int id);

int				init_philo(t_data *data);
int				init_mutex(t_data *data);
int				init_all(char **av, t_data *data);

void			action(t_philo *philo);

#endif
