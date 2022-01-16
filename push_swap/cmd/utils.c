/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:29:15 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/16 18:05:15 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sa(t_list **stack_a)
{
	t_list	*tmp;

	if (ft_lstsize(*stack_a) <= 1)
		return ;
	tmp = (*stack_a)->next;
	(*stack_a)->next = tmp->next;
	tmp->next = (*stack_a);
	(*stack_a) = tmp;
}

void sb(t_list **stack_b)
{
	t_list	*tmp;

	if (ft_lstsize(*stack_b) <= 1)
		return ;
	tmp = (*stack_b)->next;
	(*stack_b)->next = tmp->next;
	tmp->next = (stack_b);
	(*stack_b) = tmp;
}


void ss(t_list **stack_a, t_list **stack_b)
{
	sa(&stack_a);
	sb(&stack_b);
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	tmp = (*stack_b);

}
/*
void	pb(int *stack_a, int *stack_b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (!stack_a[i])
		i++;
	if (!stack_a[i])
		return ;
	if (stack_b[0])
		return ;
	while (!stack_b[j])
	   j++;
	j--;
	stack_b[j] = stack_a[i];
	stack_a[i] = NULL;
}
*/
