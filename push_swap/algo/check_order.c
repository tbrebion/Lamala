/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:55:33 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/08 13:59:02 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_order(t_list **stack_a)
{
	t_list	*save;

	save = (*stack_a);
	if ((*stack_a) == NULL)
		return (1);
	while (save->next)
	{
		if (save->content > save->next->content)
			return (0);
		save = save->next;
	}
	return (1);
}
