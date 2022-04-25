/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:34:32 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/01 13:34:42 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (alst != NULL && *alst != NULL)
	{
		tmp = *alst;
		tmp = ft_lstlast(*(alst));
		tmp->next = new;
		return ;
	}
	*alst = new;
}
