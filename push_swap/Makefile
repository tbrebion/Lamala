# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/27 14:28:47 by tbrebion          #+#    #+#              #
#    Updated: 2022/08/18 20:21:02 by tbrebion         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ALGO = $(addprefix algo/, algo.c big_stack.c check_order.c small_stack.c medians_stack.c 100_stack_utils.c \
100_stack.c 500_stack.c)

CFP = $(addprefix check_fill_print/, check_stack.c fill_print_stack.c)

CMD = $(addprefix cmd/, utils.c utils1.c utils2.c)

PRINTF = $(addprefix ft_printf/, ft_printf.c ft_put_p.c ft_putchar.c ft_putnbr.c ft_putnbr_bhex.c \
ft_putnbr_hex.c ft_putstr.c ft_putulnbr_hex.c ft_putunbr.c hex_len.c nb_len.c unb_len.c)

LST = $(addprefix lst/, ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c ft_lstnew.c ft_lstsize.c)

PS = ft_atoi.c ft_split.c main.c ft_free.c free_split.c

SRCS = $(ALGO) $(CFP) $(CMD) $(PRINTF) $(LST) $(PS)

NAME = push_swap
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
