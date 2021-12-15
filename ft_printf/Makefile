# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 17:58:26 by tbrebion          #+#    #+#              #
#    Updated: 2021/12/15 18:31:59 by tbrebion         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(addprefix sources/, ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbr_hex.c ft_putnbr_bhex.c ft_put_p.c \
ft_putstr.c ft_putunbr.c hex_len.c nb_len.c unb_len.c ft_putulnbr_hex.c)

NAME = libftprintf.a
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
