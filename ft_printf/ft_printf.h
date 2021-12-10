/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:17:49 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/10 16:47:12 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_PRINT_H
# define	FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"
# include "sources/sources.h"

int		ft_printf(const char *input, ...);
int		print_noparams_char(const char *input, int char_count, int i);
void	display_char(char *input, int i, int char_count, int x, va_list args);
void	display_string(char *in, int i, int c_count, char *str, va_list args);
void	display_p(char *input, int i, int char_count, int x, va_list args);
void	display_nb(const char *in, int i, int char_count, int x, va_list args);
void	display_unb(const char *in, int i, int c, unsigned int u, va_list args);
void	display_hex(const char *in, int i, int char_count, int x, va_list args);
void	display_HEX(const char *in, int i, int char_count, int x, va_list args);


# endif
