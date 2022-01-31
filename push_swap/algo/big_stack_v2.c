/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_stack_v2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:24:56 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/31 14:27:53 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*void	sort_big_stack(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*tmp2;
	int		i;
	int		j;

	i = ft_lstsize(*stack_a);
	j = 0;
	while(ft_lstsize(*stack_a) > i / 2)
		pb(stack_a, stack_b);
	tmp = (*stack_a);
	tmp2 = (*stack_b);
	i = 0;
	while (check_order(stack_a) != 1)
	{
		while (tmp->content != return_smallest(stack_a))
		{
			tmp = tmp->next;
			i++;
		}
		while (tmp2->content != return_biggest(stack_b))
		{
			tmp2 = tmp2->next;
			j++;
		}
		if (i <= (ft_lstsize(*stack_a) / 2) && j <= (ft_lstsize(*stack_b) / 2))
		{
			if (i > j)
			{
				while (j-- > 0)
				{
					rr(stack_a, stack_b);
					i--;
				}
				while (i-- > 0)
					ra(stack_a);
			}
			if (i < j)
			{
				while (i-- > 0)
				{
					rr(stack_a, stack_b);
					j--;
				}
				while (j-- > 0)
					rb(stack_b);
			}
			else
			{
				while (i-- > 0 || j-- > 0)
					rr(stack_a, stack_b);
			}
		}
		else if (i > (ft_lstsize(*stack_a) / 2) && j > (ft_lstsize(*stack_b) / 2))
		{
			if (i > j)
			{
				while (i++ < ft_lstsize(*stack_a) || j++ < ft_lstsize(*stack_b))
					rrr(stack_a, stack_b);
				while (j++ < ft_lstsize(*stack_b))
					rrb(stack_b);
			}
			if (i < j)
			{
				while (i++ < ft_lstsize(*stack_a) || j++ < ft_lstsize(*stack_b))
					rrr(stack_a, stack_b);
				while (i++ < ft_lstsize(*stack_a))
					rra(stack_a);
			}
			else
			{
				while (i++ < ft_lstsize(*stack_a) || j++ < ft_lstsize(*stack_b))
					rrr(stack_a, stack_b);
			}
		}
		else if (i <= (ft_lstsize(*stack_a) / 2) && j > (ft_lstsize(*stack_b) / 2))
		{
			while (i-- > 0)
				ra(stack_a);
			while (j++ < ft_lstsize(*stack_b))
				rrb(stack_b);
		}
		else if (j <= (ft_lstsize(*stack_b) / 2) && i > (ft_lstsize(*stack_a) / 2))
		{
			while (j-- > 0)
				rb(stack_b);
			while (i++ < ft_lstsize(*stack_a))
				rra(stack_a);
		}
	}
}*/
