/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_stack_v2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:24:56 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/28 14:33:25 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_big_stack(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*tmp2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while(ft_lstsize(*stack_a) > (ft_lstsize(*stack_a) / 2))
		pb(stack_a, stack_b);
	tmp = (*stack_a);
	tmp2 = (*stack_b);
	while (check_order(stack_a) != 1)
	{
		while (tmp->content != return_smallest(stack_a))
		{
			tmp = tmp->next;
			i++;
		}
		while (tmp2->content != return_biggest(*stack_b))
		{
			tmp = tmp->next;
			j++;
		}
		if (i <= (ft_lstsize(*stack_a) / 2) && j <= (ft_lstsize(*stack_b) / 2))
		{
			while (i-- > 0 && j-- > 0)
				rr(stack_a, stack_b);
		}
		if (i > (ft_lstsize(*stack_a) / 2) && j > (ft_lstsize(*stack_b) / 2))
		{
			while (i++ < ft_lstsize(*stack_a) && j++ < ft_lstsize(*stack_b))
				rrr(stack_a, stack_b);
		}
		if (i <=  )
	}	
}
