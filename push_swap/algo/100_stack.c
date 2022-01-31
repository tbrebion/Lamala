/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   100_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:48:25 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/31 17:28:24 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_100_stack(t_list **stack_a, t_list **stack_b)
{
	int	n;
	int	quart;
	t_list	*tmp;

	n = 4;
	while (*stack_a)
	{	
		quart = return_median(stack_a, n);
		while (quart != return_smallest(&tmp))
		{
			if (tmp->content < quart)
				pb(stack_a, stack_b);
			tmp = tmp->next;
		}
		n--;
	}
}
