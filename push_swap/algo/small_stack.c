/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:43:49 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/28 13:45:43 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_2(t_list **stack_a)
{
	if ((*stack_a)->content > (*stack_a)->next->content)
		sa(stack_a);
	return ;
}

void	stack_3(t_list **stack_a)
{
	if (check_order(stack_a) == 1)
		return ;
	else if ((*stack_a)->content > (*stack_a)->next->content
		&& (*stack_a)->next->next->content > (*stack_a)->content)
		sa(stack_a);
	else if ((*stack_a)->content > (*stack_a)->next->content
		&& (*stack_a)->next->content > (*stack_a)->next->next->content)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if ((*stack_a)->next->content < (*stack_a)->next->next->content
		&& (*stack_a)->next->next->content < (*stack_a)->content)
		ra(stack_a);
	else if ((*stack_a)->content < (*stack_a)->next->next->content
		&& (*stack_a)->next->next->content < (*stack_a)->next->content)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if ((*stack_a)->next->next->content < (*stack_a)->content
		&& (*stack_a)->content < (*stack_a)->next->content)
		rra(stack_a);
}

void	stack_4(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tmp = (*stack_a);
	if (check_order(stack_a) == 1)
		return ;
	while (tmp->content != return_smallest(stack_a))
	{
		tmp = tmp->next;
		i++;
	}
	if (i == 3)
		rra(stack_a);
	else if (i < 3)
		while (++j <= i)
			ra(stack_a);
	pb(stack_a, stack_b);
	stack_3(stack_a);
	pa(stack_a, stack_b);
}

void	stack_5(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tmp = (*stack_a);
	if (check_order(stack_a) == 1)
		return ;
	while (tmp->content != return_smallest(stack_a) && i++ < 5)
		tmp = tmp->next;
	if (i == 4)
		rra(stack_a);
	else if (i == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (i < 3)
		while (++j <= i)
			ra(stack_a);
	pb(stack_a, stack_b);
	stack_4(stack_a, stack_b);
	pa(stack_a, stack_b);
}
