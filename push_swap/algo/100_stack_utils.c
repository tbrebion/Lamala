/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   100_stack_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:48:25 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/04 13:44:49 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	hundred_stack_utils(t_list **stack_a, t_list **stack_b)
{
	int	n;
	int	i;
	int	quart;
	t_list	*tmp;

	n = 4;  //a changer pour 500
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

void	hundred_stack_utils_1(t_list **stack_a, t_list **stack_b, int i, int j)
{
	t_list 	*tmp_a;
	t_list 	*tmp_b;

	i = 0;
	tmp_a = (*stack_a);	
	tmp_b = (*stack_b);	
	while (tmp_a->content != return_biggest(stack_a))
	{
		i++;
		tmp_a = tmp_a->next;
	}
	while (tmp_b->content != return_smallest(stack_b))
	{
		j++;
		tmp_b = tmp_b->next;
	}
	hundred_stack_utils_rr(stack_a, stack_b, i, j);
	hundred_stack_utils_rrr(stack_a, stack_b, i, j);
	r_utils(stack_a, stack_b, i, j);
	r_utils_1(stack_a, stack_b, i, j);
}

void	hundred_stack_utils_rr(t_list **stack_a, t_list **stack_b, int i, int j)
{
	if (i <= (ft_lstsize(*stack_a)) / 2 && j <= (ft_lstsize(*stack_b) / 2))
	{
		if (i <= j)
		{
			while (i-- > 0)
			{
				rr(stack_a, stack_b);
				j--;
			}
			while (j-- > 0)
				rb(stack_b);
		}
		else if (i > j)
		{
			while (j-- > 0)
			{
				rr(stack_a, stack_b);
				i--;
			}
			while (i-- > 0)
				ra(stack_a);
		}
	}
	return ;
}

void	hundred_stack_utils_rrr(t_list **stack_a, t_list **stack_b, int i, int j)
{
	if (i > (ft_lstsize(*stack_a)) / 2 && j > (ft_lstsize(*stack_b) / 2))
	{
		if (i <= j)
		{
			while (j++ < ft_lstsize(*stack_b))
			{
				rrr(stack_a, stack_b);
				i++;
			}
			while (i++ < ft_lstsize(*stack_a))
				rra(stack_a);
		}
		else if (i > j)
		{
			while (i++ < ft_lstsize(*stack_a))
			{
				rrr(stack_a, stack_b);
				j++;
			}
			while (j++ < ft_lstsize(*stack_b))
				rrb(stack_b);
		}
	}
	return ;
}
