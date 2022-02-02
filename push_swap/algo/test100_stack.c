/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   100_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:48:25 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/02 16:53:58 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_100_stack(t_list **stack_a, t_list **stack_b)
{
	int	n;
	int	size;
	int	n_size;
	int	i;
	int	quart;

	size = ft_lstsize(*stack_a);
	n_size = size / 2;
	n = 4;
	while (size >= n_size)
	{	
		quart = return_median((*stack_a), n);
		while (return_smallest(stack_a) <= quart)
		{
			i = 0;
			while ((*stack_a)->content > quart)
			{
				i++;
				(*stack_a) = (*stack_a)->next;
			}
			if (i <= (ft_lstsize(*stack_a) / 2))
			{
				while (i-- > 0)
					ra(stack_a);
			}
			else if (i > (ft_lstsize(*stack_a) / 2))
			{
				while (i++ < ft_lstsize(*stack_a))
					rra(stack_a);
			}
			pb(stack_a, stack_b);
		}
		n--;
		ft_printf("\nsize a : %d\n", ft_lstsize(*stack_a));
	}
}

/*void	sort_100_stack(t_list **stack_a, t_list **stack_b)
{
	int	size;
	int	n_size;
	int	n;
	int	i;

	size = ft_lstsize(*stack_a);
	n_size = size / 2;
	n = 4;
	while (n > 1)
	{
		i = 0;
		size = ft_lstsize(*stack_a);
		while (return_smallest(stack_a) <= return_median(stack_a, n))
		{
			while((*stack_a)->content > return_median(stack_a, n))
			{
				i++;
				(*stack_a) = (*stack_a)->next;
			}
			if (i <= (size / 2))
			{
				while (i-- > 0)
					ra(stack_a);
			}
			if (i > (size / 2))
			{
				while (i++ <= size)
					rra(stack_a);
			}
		}
		n--;
	}
	pb(stack_a, stack_b);
}*/
