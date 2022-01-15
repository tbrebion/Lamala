/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:21:03 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/14 17:24:26 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
#define	PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>


typedef struct s_list
{
	int		content;
	struct	s_list *next;
}	t_list;

void	sa(int *stack_a);
void	sb(int *stack_b);
void	ss(int *stack_a, int *stack_b);
long int			ft_atoi(char *str);
t_list	*fill_stack(t_list **stack_a, int ac, char **av);
void	print_stack(t_list *stack_a, t_list *stack_b, int ac);
int			check_int(char **av);
int			check_double(char **av);
int			check_digit(char **av);

#endif
