/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:29:15 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/13 12:25:48 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sa(int *stack_a)
{
	int	temp;

	temp = 0;
	while (stack_a[temp])
		temp++;
	if (temp < 1)
		return ;
	temp = 0;
	temp = stack_a[1];
	stack_a[1] = stack_a[0];
	stack_a[0] = temp;
}


void sb(int *stack_b)
{
	int	temp;

	temp = 0;
	while (stack_b[temp])
		temp++;
	if (temp < 1)
		return ;
	temp = 0;
	temp = stack_b[1];
	stack_b[1] = stack_b[0];
	stack_b[0] = temp;
}


void ss(int *stack_a, int *stack_b)
{
	sa(stack_a);
	sb(stack_b);
}
/*
void	pa(int *stack_a, int *stack_b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (!stack_b[i])
		i++;
	if (!stack_b[i])
		return ;
	if (stack_a[0])
		return ;
	while (!stack_a[j])
		j++;
	j--;
	stack_a[j] = stack_b[i];
	stack_b[i] = NULL;
}

void	pb(int *stack_a, int *stack_b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (!stack_a[i])
		i++;
	if (!stack_a[i])
		return ;
	if (stack_b[0])
		return ;
	while (!stack_b[j])
	   j++;
	j--;
	stack_b[j] = stack_a[i];
	stack_a[i] = NULL;
}
*/
