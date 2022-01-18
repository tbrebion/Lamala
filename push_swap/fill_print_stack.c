/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_print_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:31:41 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/18 15:56:05 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list 	*fill_stack(t_list **stack_a, int ac, char **av)
{
	int	i;
	int	j;
	t_list	*new;
	t_list	*current;

	current = *stack_a;
	i = 1;
	j = ac - 1;
	while (j > 0)
	{
		new = malloc(sizeof(t_list *));
		new->content = (int)ft_atoi(av[j]);
		new->next = current;
		stack_a = &new;
		current = new;
		j--;
		i++;
	}
	return (*stack_a);
}

void	print_stack(t_list *stack_a, t_list *stack_b)
{
	while (stack_a != NULL || stack_b != NULL)
	{
		if (stack_a != NULL && stack_b != NULL)
		{
			ft_printf("%d	%d\n", (int)stack_a->content, (int)stack_b->content);
			stack_a = stack_a->next;
			stack_b = stack_b->next;
		}
		else if (stack_b == NULL && stack_a != NULL)
		{
			ft_printf("%d	 \n", (int)stack_a->content);
			stack_a = stack_a->next;
		}
		else if (stack_a == NULL && stack_b != NULL)
		{
			ft_printf("  	%d \n", (int)stack_b->content);
			stack_b = stack_b->next;
		}
	}
	ft_printf("_	_\n");
	ft_printf("a	b\n");
}
