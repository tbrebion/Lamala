/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   500_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:48:36 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/08 11:51:41 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_500_stack(t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = 0;
	hundred_stack_utils(stack_a, stack_b, 11);
	while ((*stack_a))
		sort_small_a(stack_a, stack_b);
	while (i++ < 45)
		pa(stack_a, stack_b);
	while (*stack_b)
		sort_b(stack_a, stack_b);
}
