/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   100_stack_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:16:22 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/07 17:31:36 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
/*
void	r_utils(t_list **stack_a, t_list **stack_b, int i, int j)
{
	if (i > (ft_lstsize(*stack_a) / 2) && j <= (ft_lstsize(*stack_b) / 2))
	{
		while (i++ < ft_lstsize(*stack_a))
			rra(stack_a);
		while (j-- > 0)
			rb(stack_b);
	}
	return ;
}

void	r_utils_1(t_list **stack_a, t_list **stack_b, int i, int j)
{
	if (i <= (ft_lstsize(*stack_a) / 2) && j > (ft_lstsize(*stack_b) / 2))
	{
		while (i-- > 0)
			ra(stack_a);
		while (j++ < ft_lstsize(*stack_b))
			rrb(stack_b);
	}
}

int	return_other_smallest(t_list **stack_a, int smaller)
{
	t_list	*save;
	int	i;

	i = INT_MAX;
	save = (*stack_a);
	while (save != NULL)
	{
		if (save->content < i && save->content > smaller)
			i = save->content;
		save = save->next;
	}
	return (i);
}

int	return_other_biggest(t_list **stack_a, int bigger)
{
	t_list	*save;
	int	i;

	i = INT_MIN;
	save = (*stack_a);
	while (save != NULL)
	{
		if (save->content > i && save->content < bigger)
			i = save->content;
		save = save->next;
	}
	return (i);
}*/
