# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 15:25:53 by tbrebion          #+#    #+#              #
#    Updated: 2022/02/14 16:22:18 by tbrebion         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = pipex.c pipex_utils.c

NAME = pipex

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	make re -C ./libft
	$(CC) $(CFLAGS) $(OBJS) -Llibft -lft -o $(NAME)

clean:
	make clean -C ./libft
	$(RM) $(OBJS)

fclean:
	make fclean -C ./libft
	$(RM) $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
