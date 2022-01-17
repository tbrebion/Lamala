/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:15:37 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/17 09:35:32 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (check_int(av) == 0 || check_double(av) == 0 || check_digit(av) == 0)
	{
		ft_printf("Error\n");
		return (0);
	}
	stack_a = fill_stack(&stack_a, ac, av);
	print_stack(stack_a, stack_b);
	ft_printf("\n\n");
	rra(&stack_a);
	print_stack(stack_a, stack_b);
	ft_printf("\n\n");
	ra(&stack_a);
	print_stack(stack_a, stack_b);
	/*pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	print_stack(stack_a, stack_b);
	ft_printf("\n\n");
	rr(&stack_a, &stack_b);
	print_stack(stack_a, stack_b);*/
	return (0);
}
