/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_stack_v3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:55:11 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/31 14:19:31 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
/*
int	check_order_tab(int *tab)
{
	int	i;

	i = 0;
	if (!tab)
		return (1);
	while (tab[i++])
	{
		if (tab[i] > tab[i + 1])
			return (0);
	}
	return (1);
}

int	*median_utils(t_list **stack_a)
{
	int	i;
	int	*tab;
	int	tmp;

	i = 0;
	while ((*stack_a)->next)
	{
		tab[i] = (*stack_a)->content;
		(*stack_a) = (*stack_a)->next;
		i++;
	}
	i = 0;
	while (check_order_tab(tab))
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = tmp;
		}
		i++;
	}
	return (tab);
}

int	return_median(t_list **stack_a)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc(sizeof(int) * ft_lstsize(*stack_a));
	if (!tab)
		return (NULL);
	tab = median_utils(stack_a);
	i = ft_lstsize(*stack_a) / 2;
	return (tab[i]);
}

void	cut_in_2(t_list **stack_a, t_list **stack_b)
{
	int	pivot;

	pivot = return_median(stack_a);
	while ((*stack_a)->content != pivot)
	{
		pb(stack_a, stack_b);
		(*stack_a) = (*stack_a)->next;
	}
}

void	cut_in_2(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*tmp2;

	
}

void	sort_2_stack(t_list **stack_a, t_list **stack_b)
{
	cut_in_2(stack_a, stack_b);
	while (check_order(stack_a) != 1)
	{
		
	}
}
*/











