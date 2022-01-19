/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:55:33 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/19 14:15:44 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_order(t_list **stack_a)
{
	if ((*stack_a) == NULL)
		return (1);
	while ((*stack_a)->next != NULL)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			return (0);
		(*stack_a) = (*stack_a)->next;
	}
	return (1);
}
