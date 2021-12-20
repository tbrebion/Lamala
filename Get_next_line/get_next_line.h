/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 17:02:38 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/20 17:46:34 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include<unistd.h>
# include<stdlib.h>

char	*get_next_line(int fd);
char	*get_save(int fd, char *left_str);
char	*get_line(char *str);
char	*new_str(char *str);
char	*ft_strchr(const char *str, char c);
char	*ft_strjoin(const char *s1, const char *s2);
size_t			ft_strlen(const char *str);

# endif
