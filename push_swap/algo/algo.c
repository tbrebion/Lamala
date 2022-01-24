/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:22:00 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/24 17:44:45 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	if (ft_lstsize(*stack_a) <= 5)
	{
		sort_small_stack((stack_a), (stack_b));
		return ;
	}
	/*sort_big_stack((*stack_b), (*stack_b));*/
	return ;
}
