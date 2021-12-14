/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putulnbr_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:15:18 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/14 17:36:04 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int     ft_putulnbr_hex(unsigned long int nb)
{
        char            *hex;
        unsigned long int    save;
        int                     c;

        c = 0;
        save = nb;
        hex = "0123456789abcdef";
        if (nb == 16)
                return (ft_putstr("10"));
        if (nb > 16)
        {
                ft_putulnbr_hex(nb / 16);
        }
        ft_putchar(hex[nb % 16]);
        c += hex_len(save);
        return (c);
}
