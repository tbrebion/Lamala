/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 11:26:53 by tbrebion          #+#    #+#             */
/*   Updated: 2022/03/17 16:55:02 by tbrebion         ###   ########.fr       */
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

typedef	enum	e_fork
{
	FREE = 0,
	TAKEN = 1,
}	t_fork;

typedef	struct	s_philo
{
/*	int	eating;
	int	sleeping;
	int	thinking;
	int	dying;*/
	int	id;
	int	x_ate;
	int	left_fork_id;
	int	right_fork_id;

}	t_philo;

typedef	struct	s_data
{
	//int	fork;
	int				nb_philo;
	int				time_die;
	int				time_eat;
	int				time_sleep;
	int				nb_eat;
	int				all_ate;
	int				died;
	struct s_philo	philo[250];
}	t_data;

long int		ft_atoi(const char *str);
void			ft_putstr_fd(char *s, int fd);
int				ft_isdigit(char c);

int				check_digit(char **av);
int				check_overflow(char **av);
int				checker(char **av);


int				init_all(char **av, t_data *data);

int				create_philo(int ac, char **av);

#endif
