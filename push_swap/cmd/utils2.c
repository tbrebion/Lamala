/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 06:12:20 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/17 09:37:10 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*save;

	if (!(*stack_a) || ft_lstsize(*stack_a) < 2)
		return ;
	save = (*stack_a);
	while ((*stack_a)->next->next != NULL)
		(*stack_a)->next = (*stack_a);
	tmp = (*stack_a)->next;
	(*stack_a)->next = NULL;
	(*stack_a) = tmp;
	(*stack_a)->next = save;
}
/*
void	rrb(t_list **stack_b)
{

}


void	rrr(t_list **stack_a, t_list **stack_b)
{

}*/
