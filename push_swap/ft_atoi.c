/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:30:18 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/28 16:51:40 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//typedef signed int		Type

long int	ft_atoi(char *str/*, int* nbr*/)
{
	int			i;
	int			j;
	long int	result;

	j = 1;
	i = 0;
	result = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;
	if (str[i] == '-')
	{
		j *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		/*if (result != (int)((int)(result * 10) / 10))
		{
			return (error);
		}*/
		result = result * 10 + (str[i] - 48);

		/*if ((int)(result - (j < 0)) <  0)
			return (error);*/
		
		i++;
	}
	return (result * j);
}
