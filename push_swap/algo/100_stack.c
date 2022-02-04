/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   100_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:17:35 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/04 13:27:02 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_100_stack(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	hundred_stack_utils(stack_a, stack_b);
	while (i++ < 25)
		pa(stack_a, stack_b);
//	while (check_order(stack_a) != 1)
//	{
		hundred_stack_utils_1(stack_a, stack_b, i, j);
//	}
}
