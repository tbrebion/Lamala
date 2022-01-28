/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_stack_v3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:55:11 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/28 18:04:23 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_order_tab(int *tab)
{
	int	*t;
}

int	return_median(t_list **stack_a)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc(sizeof(int) * ft_lstsize(*stack_a));
	if (!tab)
		return (NULL);
	while ((*stack_a)->next)
	{
		tab[i] = (*stack_a)->content;
		(*stack_a) = (*stack_a)->next;
		i++;
	}
	while ()
}
