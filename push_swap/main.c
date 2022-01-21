/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:15:37 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/21 17:25:47 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	/*if (ac == 2)
		av = ft_split(av[1], ' ');*/
	if (check_int(av) == 0 || check_double(av) == 0 || check_digit(av) == 0)
	{
		ft_printf("Error\n");
		return (0);
	}
	stack_a = fill_stack(&stack_a, ac, av);
	print_stack(stack_a, stack_b);

	ft_printf("\n\n");
	t_list	*save = stack_a;
	while (stack_a != NULL)
	{
		ft_printf("%d", stack_a->content);
		stack_a = stack_a->next;
	}
	stack_a = save;
	ft_printf("\n\n");

	stack_3(&stack_a);

	ft_printf("\n\n");

	t_list	*save1 = stack_a;
	while (stack_a != NULL)
	{
		ft_printf("%d", stack_a->content);
		stack_a = stack_a->next;
	}
	ft_printf("\n\n");
	stack_a = save1;

	print_stack(stack_a, stack_b);
	return (0);
}
