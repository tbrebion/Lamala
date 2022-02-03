/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   100_stack_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:16:22 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/03 17:48:24 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
