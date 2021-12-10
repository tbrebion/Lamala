/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_unb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:21:02 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/10 16:31:59 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    display_unb(const char *in, int i, int c, unsigned int u, va_list args)
{
        if (in[i + 1] == 'u')
        {
                u = (unsigned int)va_args(args, unsigned int);
                ft_putunbr(u);
                c += ft_putunbr(u);
        }
        else
                return ;
}
