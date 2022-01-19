/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:43:49 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/19 18:04:19 by tbrebion         ###   ########.fr       */
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
	if ((*stack_a)->content < (*stack_a)->next->content)
		rra(stack_a);
	if ((*stack_a)->content > (*stack_a)->next->content)
		sa(stack_a);
	if ((*stack_a)->next->content > (*stack_a)->next->next->content)
		rra(stack_a);
	if ((*stack_a)->content > (*stack_a)->next->content)
		sa(stack_a);
	return ;
}
