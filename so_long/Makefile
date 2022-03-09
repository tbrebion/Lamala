# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/07 16:18:52 by tbrebion          #+#    #+#              #
#    Updated: 2022/03/09 11:48:39 by tbrebion         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CI = $(addprefix check_init/, check_player.c fill_map.c to_check.c checker.c init_window.c)

DIS = $(addprefix display/, display_xpm.c displayer.c)

TM = $(addprefix to_move/, moves.c nb_collect.c player_pos.c)

GNL = $(addprefix get_next_line/, get_next_line.c get_next_line_utils.c)

PS = main.c utils.c

SRCS = $(CI) $(DIS) $(TM) $(GNL) $(PS)

NAME = so_long

OBJS = $(SRCS:.c=.o)

CC = gcc

#CFLAGS = -Wall -Wextra -L./mlx_macos -lmlx -framework OpenGL -framework AppKit

CFLAGS = -Wall -Wextra -L./mlx -lmlx -lXext -lX11

RM = rm -rf

#.c.o:
#	$(CC) $(CFLAGS) -c $< -o $(NAME)

all: $(NAME)

$(NAME): $(OBJS)
	make re -C ./libft
	make re -C ./mlx_macos
	$(CC) $(CFLAGS) $(OBJS) -L./libft -lft -o $(NAME)

clean:
	make clean -C ./libft
	make clean -C ./mlx_macos
	$(RM) $(OBJS)

fclean:
	make fclean -C ./libft
	make clean -C ./mlx_macos
	$(RM) $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
