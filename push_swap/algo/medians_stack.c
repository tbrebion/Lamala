/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medians_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:55:11 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/31 18:21:28 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	t_list	*save;

	i = 0;
	save = (*stack_a);
	tab = malloc(sizeof(int) * ft_lstsize(*stack_a));
	if (!tab)
		return (NULL);
	while (*stack_a)
	{
		tab[i] = (*stack_a)->content;
		(*stack_a) = (*stack_a)->next;
		i++;
	}
	while (check_order_tab(tab) != 1)
	{
		i = 0;
		while(i++ < ft_lstsize(save))
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = tmp;
			}
		}
	}
	return (tab);
}

int	return_median(t_list **stack_a, int n)
{
	int	*tab;
	int	i;

	i = 0;
	tab = median_utils(stack_a);
	i = ft_lstsize(*stack_a) / n;
	return (tab[i]);
}
