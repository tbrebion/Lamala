/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medians_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:55:11 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/08 16:05:39 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*median_utils(t_list *stack_a, int size)
{
	int	*tab;
	int	i;

	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	i = 0;
	while (stack_a)
	{
		tab[i] = (stack_a)->content;
		(stack_a) = (stack_a)->next;
		i++;
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

int	return_median(t_list *stack_a, int n)
{
	int		*tab;
	int		i;
	int		size;
	int		quart;
	t_list	*save;

	save = stack_a;
	i = 0;
	size = ft_lstsize(stack_a);
	tab = median_utils((stack_a), size);
	median_utils2(tab, size);
	(stack_a) = save;
	i = (ft_lstsize(stack_a) / n) - 1;
	quart = tab[i];
	free(tab);
	return (quart);
}
