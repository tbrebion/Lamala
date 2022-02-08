/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:52:46 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/08 15:58:31 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_list *stack_a, t_list *stack_b)
{
	while (stack_a && stack_b)
	{
		free(stack_a);
		free(stack_b);
		stack_a = stack_a->next;
		stack_b = stack_b->next;
	}
	return ;
}
