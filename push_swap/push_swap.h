/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:21:03 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/16 16:24:07 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
#define	PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include "ft_printf/ft_printf.h"
//#include "lst/lst.h"

typedef struct s_list
{
	int		content;
	struct	s_list *next;
}	t_list;

void	sa(t_list *stack_a);
//void	sb(t_list *stack_b);
//void	ss(t_list *stack_a, t_list *stack_b);
int	ft_lstsize(t_list *lst);
long int			ft_atoi(char *str);
t_list	*fill_stack(t_list **stack_a, int ac, char **av);
void	print_stack(t_list *stack_a, t_list *stack_b);
int			check_int(char **av);
int			check_double(char **av);
int			check_digit(char **av);

#endif
