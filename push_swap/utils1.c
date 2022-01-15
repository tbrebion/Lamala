/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:23:32 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/12 18:46:42 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ra(int *stack_a)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	j = 0;
	while (!stack_a[j])
		j++;
	tmp = stack_a[j];
	j++;
	while (stack_a[j])
	{
		stack_a[j - 1] = stack_a[j];
		j++;
	}
	stack_a[j] = tmp;
}

void	rb(int *stack_b)
{

}
