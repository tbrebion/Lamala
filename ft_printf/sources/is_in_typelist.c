/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_in_typelist.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:13:59 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/09 13:17:57 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_in_typelist(char c)
{
	int	i;
	char	*type_set;

	i = 0;
	type_set = "cspdiuxX%";

	while (type_set[i])
	{
		if (type_set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
