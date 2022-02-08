/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:22:00 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/08 15:35:33 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	return_smallest(t_list **stack_a)
{
	t_list	*save;
	int		i;

	i = INT_MAX;
	save = (*stack_a);
	while (save != NULL)
	{
		if (save->content < i)
			i = save->content;
		save = save->next;
	}
	return (i);
}

int	return_biggest(t_list **stack_a)
{
	t_list	*save;
	int		i;

	i = INT_MIN;
	save = (*stack_a);
	while (save != NULL)
	{
		if (save->content > i)
			i = save->content;
		save = save->next;
	}
	return (i);
}

void	sort_small_stack(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) == 1)
		return ;
	if (ft_lstsize(*stack_a) == 2)
		stack_2(stack_a);
	if (ft_lstsize(*stack_a) == 3)
		stack_3(stack_a);
	if (ft_lstsize(*stack_a) == 4)
		stack_4(stack_a, stack_b);
	if (ft_lstsize(*stack_a) == 5)
		stack_5(stack_a, stack_b);
}

void	algo(t_list **stack_a, t_list **stack_b)
{
	if (check_order(stack_a) == 1)
		return ;
	if (ft_lstsize(*stack_a) <= 5)
	{
		sort_small_stack(stack_a, stack_b);
		return ;
	}
	else if (ft_lstsize(*stack_a) == 100)
	{
		sort_100_stack(stack_a, stack_b);
		return ;
	}
	else if (ft_lstsize(*stack_a) == 500)
	{
		sort_500_stack(stack_a, stack_b);
		return ;
	}
	else
		sort_big_stack(stack_a, stack_b);
}
