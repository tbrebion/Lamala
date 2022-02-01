/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medians_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:55:11 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/01 19:16:45 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*int	check_order_tab(int *tab, int n)
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
}*/

int	*median_utils(t_list **stack_a, int size)
{
	int	*tab;
	int	i;

	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	i = 0;
	while (*stack_a)
	{
		tab[i] = (*stack_a)->content;
		i++;
		(*stack_a) = (*stack_a)->next;
	}
	return (tab);
}

void	median_utils2(int *tab, int size)
{
	int	i;
	int	j;
	int	k;
	int	tmp;

	j = 0;
	while (j < size)
		j++;
	i = 0;
	while (i < j)
	{
		k = i + 1;
		while (k < j)
		{
			if (tab[i] > tab[k])
			{
				tmp = tab[k];
				tab[k] = tab[i];
				tab[i] = tmp;
			}
			k++;
		}
		i++;
	}
}

int	return_median(t_list **stack_a, int n)
{
	int	*tab;
	int	i;
	int	size;
	t_list	*save;

	i = 0;
	save = (*stack_a);
	size = ft_lstsize(*stack_a);
	tab = median_utils(stack_a, size);
	int	j = 0;
	while (j++ < size)
		ft_printf("\ntab[j] : %d\n", tab[j]);
	ft_printf("\n\nNEXT\n\n");
	median_utils2(tab, size);

	j = 0;
	while (j++ < size)
		ft_printf("\ntab[j] : %d\n", tab[j]);

	(*stack_a) = save;
	i = ft_lstsize(*stack_a) / n;
	return (tab[i]);
}
