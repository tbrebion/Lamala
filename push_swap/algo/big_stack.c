/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:11:46 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/26 17:32:29 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_big_stack(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int	i;
	int	nb_move;
	int	stack_size;

	nb_move = 0;
	stack_size = ft_lstsize(*stack_a);
	while (ft_lstsize(*stack_a) > 5)
	{
		i = 0;
		tmp = (*stack_a);
		while (tmp->content != return_smallest(stack_a))
		{
			tmp = tmp->next;
			i++;
		}
		if (i <= (ft_lstsize(*stack_a) / 2))
		{
			while (i-- > 0)
			{
				ra(stack_a);
				nb_move++;
			}
		}
		else if (i > (ft_lstsize(*stack_a) / 2))
		{
			while (i++ < ft_lstsize(*stack_a))
			{
				rra(stack_a);
				nb_move++;
			}
		}
		pb(stack_a, stack_b);
		nb_move++;
	}
	stack_5(stack_a, stack_b);
	while (*stack_b)
	{
		pa(stack_a, stack_b);
		nb_move++;
	}
	ft_printf("\n\n Pour %d chiffres --> %d coups.\n\n", stack_size, (nb_move + 9));
}