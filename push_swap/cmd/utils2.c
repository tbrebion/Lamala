/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 06:12:20 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/03 18:13:33 by tbrebion         ###   ########.fr       */
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
		(*stack_a) = (**stack_a).next;
	tmp = (*stack_a)->next;
	(*stack_a)->next = NULL;
	(*stack_a) = tmp;
	(*stack_a)->next = save;
	ft_putstr("rra\n");
}

void	rrb(t_list **stack_b)
{
	t_list	*tmp;
	t_list	*save;

	if (!(*stack_b) || ft_lstsize(*stack_b) < 2)
		return ;
	save = (*stack_b);
	while ((*stack_b)->next->next != NULL)
		(*stack_b) = (**stack_b).next;
	tmp = (*stack_b)->next;
	(*stack_b)->next = NULL;
	(*stack_b) = tmp;
	(*stack_b)->next = save;
	ft_putstr("rrb\n");
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*save;

	if (!(*stack_a) || ft_lstsize(*stack_a) < 2)
		return ;
	save = (*stack_a);
	while ((*stack_a)->next->next != NULL)
		(*stack_a) = (**stack_a).next;
	tmp = (*stack_a)->next;
	(*stack_a)->next = NULL;
	(*stack_a) = tmp;
	(*stack_a)->next = save;
	if (!(*stack_b) || ft_lstsize(*stack_b) < 2)
		return ;
	save = (*stack_b);
	while ((*stack_b)->next->next != NULL)
		(*stack_b) = (**stack_b).next;
	tmp = (*stack_b)->next;
	(*stack_b)->next = NULL;
	(*stack_b) = tmp;
	(*stack_b)->next = save;
	ft_putstr("rrr\n");
}
