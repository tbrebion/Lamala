/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:23:32 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/03 18:13:10 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*save;

	if (!(*stack_a) || ft_lstsize(*stack_a) < 2)
		return ;
	tmp = (*stack_a);
	save = (*stack_a)->next;
	while ((*stack_a)->next != NULL)
		(*stack_a) = (*stack_a)->next;
	tmp->next = NULL;
	(*stack_a)->next = tmp;
	(*stack_a) = save;
	ft_putstr("ra\n");
}

void	rb(t_list **stack_b)
{
	t_list	*tmp;
	t_list	*save;

	if (!(*stack_b) || ft_lstsize(*stack_b) < 2)
		return ;
	tmp = (*stack_b);
	save = (*stack_b)->next;
	while ((*stack_b)->next != NULL)
		(*stack_b) = (*stack_b)->next;
	tmp->next = NULL;
	(*stack_b)->next = tmp;
	(*stack_b) = save;
	ft_putstr("rb\n");
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*save;

	if (!(*stack_a) || ft_lstsize(*stack_a) < 2)
		return ;
	tmp = (*stack_a);
	save = (*stack_a)->next;
	while ((*stack_a)->next != NULL)
		(*stack_a) = (*stack_a)->next;
	tmp->next = NULL;
	(*stack_a)->next = tmp;
	(*stack_a) = save;
	if (!(*stack_b) || ft_lstsize(*stack_b) < 2)
		return ;
	tmp = (*stack_b);
	save = (*stack_b)->next;
	while ((*stack_b)->next != NULL)
		(*stack_b) = (*stack_b)->next;
	tmp->next = NULL;
	(*stack_b)->next = tmp;
	(*stack_b) = save;
	ft_putstr("rr\n");
}
