/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sources.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:14:21 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/13 14:05:13 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOURCES_H
# define SOURCES_H

int		is_in_typelist(char c);
int		ft_putchar(int c);
int		ft_putnbr(int nb);
int		ft_putnbr_hex(int nb);
int		ft_putnbr_HEX(int nb);
int		ft_put_p(int w);
int		ft_putstr(char *str);
int		ft_putunbr(unsigned int nb);
int		nb_len(int n);
int		unb_len(unsigned int n);
int		hex_len(int n);
int		print_noparams_char(const char *input, int char_count, int i);

#endif
