/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:29:15 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/08 17:05:29 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **stack_a)
{
	t_list	*tmp;

	if (ft_lstsize(*stack_a) <= 1)
		return ;
	tmp = (*stack_a)->next;
	(*stack_a)->next = tmp->next;
	tmp->next = (*stack_a);
	(*stack_a) = tmp;
	ft_putstr("sa\n");
}

void	sb(t_list **stack_b)
{
	t_list	*tmp;

	if (ft_lstsize(*stack_b) <= 1)
		return ;
	tmp = (*stack_b)->next;
	(*stack_b)->next = tmp->next;
	tmp->next = (*stack_b);
	(*stack_b) = tmp;
	ft_putstr("sb\n");
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (ft_lstsize(*stack_a) <= 1)
		return ;
	tmp = (*stack_a)->next;
	(*stack_a)->next = tmp->next;
	tmp->next = (*stack_a);
	(*stack_a) = tmp;
	if (ft_lstsize(*stack_b) <= 1)
		return ;
	tmp1 = (*stack_b)->next;
	(*stack_b)->next = tmp1->next;
	tmp1->next = (*stack_b);
	(*stack_b) = tmp1;
	ft_putstr("ss\n");
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*save;

	if (!(*stack_a))
		return ;
	tmp = ft_lstnew((*stack_a)->content);
	ft_lstadd_front(stack_b, tmp);
	if ((*stack_a)->next == NULL)
	{
		free(*stack_a);
		(*stack_a) = NULL;
	}
	else if ((*stack_a)->next != NULL)
	{
		save = (*stack_a)->next;
		free(*stack_a);
		(*stack_a) = save;
	}
	ft_putstr("pb\n");
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*save;

	if (!(*stack_b))
		return ;
	tmp = ft_lstnew((*stack_b)->content);
	ft_lstadd_front(stack_a, tmp);
	if ((*stack_b)->next == NULL)
	{
		free(*stack_b);
		(*stack_b) = NULL;
	}
	else if ((*stack_b)->next != NULL)
	{
		save = (*stack_b)->next;
		free(*stack_b);
		(*stack_b) = save;
	}
	ft_putstr("pa\n");
}
