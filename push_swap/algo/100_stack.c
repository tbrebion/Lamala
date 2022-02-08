/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   100_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:17:35 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/08 11:54:25 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	move_in_a(t_list **stack_a, t_list **stack_b, int i)
{
	if (i <= (ft_lstsize(*stack_a) / 2))
	{
		while (i-- > 0)
			ra(stack_a);
	}
	else
	{
		while (i++ < ft_lstsize(*stack_a))
			rra(stack_a);
	}
	pb(stack_a, stack_b);
}

void	sort_small_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_a;
	int		i;

	i = 0;
	tmp_a = (*stack_a);
	while (tmp_a && tmp_a->content != return_smallest(stack_a))
	{
		i++;
		tmp_a = tmp_a->next;
	}
	move_in_a(stack_a, stack_b, i);
}

void	move_in_b(t_list **stack_a, t_list **stack_b, int j)
{
	if (j <= (ft_lstsize(*stack_b) / 2))
	{
		while (j-- > 0)
			rb(stack_b);
	}
	else
	{
		while (j++ < ft_lstsize(*stack_b))
			rrb(stack_b);
	}
	pa(stack_a, stack_b);
}

void	sort_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_b;
	int		j;

	j = 0;
	tmp_b = (*stack_b);
	while (tmp_b && tmp_b->content != return_biggest(stack_b))
	{
		j++;
		tmp_b = tmp_b->next;
	}
	move_in_b(stack_a, stack_b, j);
}

void	sort_100_stack(t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = 0;
	hundred_stack_utils(stack_a, stack_b, 4);
	while ((*stack_a))
		sort_small_a(stack_a, stack_b);
	while (i++ < 25)
		pa(stack_a, stack_b);
	while (*stack_b)
		sort_b(stack_a, stack_b);
}
