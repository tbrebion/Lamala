/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:10:05 by tbrebion          #+#    #+#             */
/*   Updated: 2021/11/29 17:31:32 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

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
