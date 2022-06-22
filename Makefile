# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blevrel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/17 13:43:13 by blevrel           #+#    #+#              #
#    Updated: 2022/06/21 15:11:59 by blevrel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Minesweeper

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

SRCS	=	srcs/open_window.c srcs/load_sprites.c srcs/display_sprites.c \
			srcs/event_management.c srcs/end_prog.c srcs/finished_map.c

OBJS	=	${SRCS:.c=.o}

HEAD	=	-I mlx_linux -I includes -I libft

LIB		=	-L libft -lft -L mlx_linux -lmlx -lXext -lX11

all: $(NAME)

clean:
	make clean -C libft
	make clean -C mlx_linux
	rm -f $(OBJS)

fclean : clean
	make fclean -C libft
	rm -f $(NAME)

re : fclean all

.c.o:
	${CC} ${FLAGS} -c ${HEAD} $< -o ${<:.c=.o} -g

$(NAME): $(OBJS)
	make -C libft
	make -C mlx_linux
	$(CC) $(CFLAGS) $(OBJS) $(HEAD) $(LIB) -o $(NAME) -g

.PHONY: re fclean clean all
