# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 15:03:44 by tbrebion          #+#    #+#              #
#    Updated: 2022/04/05 11:45:51 by tbrebion         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = checker.c init_all.c libutils.c messages.c philo.c routine.c wait.c

NAME = philo

OBJS = $(SRCS:.c=.o)

CC = gcc

CFlAGS = -pthread -Wall -Wextra -Werror -fsanitize=thread -g3

RM = rm -rf

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFlAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
