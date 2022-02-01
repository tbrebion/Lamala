/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medians_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:55:11 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/01 14:12:04 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//New list
int	check_order_tab(int *tab, int n)
{
	int	i;

	i = 0;
	if (!tab)
		return (1);
	while (i++ < n)
	{
		if (tab[i] > tab[i + 1])
			return (0);
	}
	return (1);
}

int	*median_utils(t_list **stack_a)
{
	int	*tab;
	int	i;
	t_list	*save;

	save = malloc(sizeof(t_list) * ft_lstsize(*stack_a));
	if (!save)
		return (NULL);
	while (*stack_a)
	{
		save->content = (*stack_a)->content;
		save = save->next;
		(*stack_a) = (*stack_a)->next;
	}
	tab = malloc(sizeof(int) * ft_lstsize(save));
	if (!tab)
		return (NULL);
	i = 0;
	while (save)
	{
		tab[i] = save->content;
		i++;
		save = save->next;
	}
	return (tab);
}

int	*median_utils2(int *tab, t_list *save)
{
	int	i;
	int	tmp;

	while (check_order_tab(tab, ft_lstsize(save)) != 1)
	{
		i = 0;
		while (i < ft_lstsize(save))
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = tmp;
			}
			i++;
		}
	}
	ft_printf("\ntab[i] : %d\n", tab[i]);
	return (tab);
}

int	return_median(t_list **stack_a, int n)
{
	int	*tab;
	int	i;

	i = 0;
	tab = median_utils(stack_a);
	tab = median_utils2(tab, (*stack_a));
	i = ft_lstsize(*stack_a) / n;
	return (tab[i]);
}
