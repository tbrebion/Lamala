/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:43:49 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/23 17:40:47 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_2(t_list **stack_a)
{
	if ((*stack_a)->content > (*stack_a)->next->content)
		sa(stack_a);
	return ;	
}
/*
int	*put_in_tab(t_list **stack_a)
{
	int	i;
	int	*tab;
	int	size;
	t_list *save;
	save = (*stack_a);

	size = ft_lstsize(*stack_a);
	i = 0;
	tab = malloc(sizeof(int) * size);
	while (i < size)
	{
		tab[i] = (*stack_a)->content;
		(*stack_a) = (*stack_a)->next;
		i++;
	}
	(*stack_a) = save;
	return (tab);
}
*/
void	stack_3(t_list **stack_a)
{
	if (check_order(stack_a) == 1)
		return ;
	else if ((*stack_a)->content > (*stack_a)->next->content &&
			(*stack_a)->next->next->content > (*stack_a)->content)
		sa(stack_a);
	else if ((*stack_a)->content > (*stack_a)->next->content &&
			(*stack_a)->next->content > (*stack_a)->next->next->content)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if ((*stack_a)->next->content < (*stack_a)->next->next->content &&
			(*stack_a)->next->next->content < (*stack_a)->content)
		ra(stack_a);
	else if ((*stack_a)->content < (*stack_a)->next->next->content &&
			(*stack_a)->next->next->content < (*stack_a)->next->content)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if((*stack_a)->next->next->content < (*stack_a)->content &&
			(*stack_a)->content < (*stack_a)->next->content)
		rra(stack_a);
	return ;
}
