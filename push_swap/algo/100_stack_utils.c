/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   100_stack_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:48:25 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/08 11:55:41 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	hundred_stack_utils(t_list **stack_a, t_list **stack_b, int n)
{
	int		i;
	int		quart;
	t_list	*tmp;

	while (n > 1)
	{	
		quart = return_median((*stack_a), n);
		while (return_smallest(stack_a) < quart)
		{
			tmp = (*stack_a);
			i = 0;
			while (tmp->content > quart)
			{
				i++;
				tmp = tmp->next;
			}
			big_stack_utils(i, ft_lstsize(*stack_a), stack_a);
			pb(stack_a, stack_b);
		}
		n--;
	}
}
