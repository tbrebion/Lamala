/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:15:37 by tbrebion          #+#    #+#             */
/*   Updated: 2022/02/01 14:12:22 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	//t_list	*stack_b;
	char	**new_av;
	int		i;

	new_av = NULL;
	stack_a = NULL;
	//stack_b = NULL;
	i = 0;
	if (ac == 2)
		new_av = ft_split(av[1], ' ');
	else
		new_av = &av[1];
	while (new_av[i])
		i++;
	if (check_int(new_av) == 0 || check_double(new_av) == 0 || check_digit(new_av) == 0)
	{
		ft_printf("Error\n");
		return (0);
	}
	fill_stack(&stack_a, i, new_av);
	//print_stack(stack_a, stack_b);
	ft_printf("\n\n");

	ft_printf("\nmediane : %d\n", return_median(&stack_a, 2));
	//algo(&stack_a, &stack_b);
	//sort_100_stack(&stack_a, &stack_b);
	//ft_printf("\n\n");
	//print_stack(stack_a, stack_b);
	return (0);
}
