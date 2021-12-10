/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_HEX.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:42:39 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/10 16:43:24 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    display_HEX(const char *in, int i, int char_count, int x, va_list args)
{
        if (in[i + 1] == 'X')
        {
                x = (int)va_args(args, int);
                ft_putnbr_HEX(x);
                char_count += ft_putnbr_HEX(x);
        }       
        else
                return ;
}
