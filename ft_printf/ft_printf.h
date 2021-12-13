/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:17:49 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/13 17:51:43 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include"libft/libft.h"

int		ft_printf(const char *input, ...);
int             is_in_typelist(char c);
int             ft_putchar(int c);
int             ft_putnbr(int nb);
int             ft_putnbr_hex(unsigned long int nb);
int             ft_putnbr_HEX(unsigned long int nb);
int             ft_put_p(void *w);
int             ft_putstr(char *str);
int             ft_putunbr(unsigned int nb);
int             nb_len(int n);
int             unb_len(unsigned int n);
int             hex_len(long int n);
int             print_noparams_char(const char *input, int char_count, int i);


#endif
