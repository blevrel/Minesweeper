# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blevrel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 11:59:56 by blevrel           #+#    #+#              #
#    Updated: 2022/05/23 12:03:09 by blevrel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_memset.c\
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_bzero.c ft_strlcat.c ft_toupper.c ft_tolower.c\
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c\
		ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		ft_strjoin.c ft_substr.c ft_itoa.c ft_strtrim.c ft_striteri.c ft_strmapi.c ft_split.c\
		ft_putchar.c ft_putnbr.c ft_putnbr_hexa_x.c ft_putnbr_hexa_X.c ft_putnbr_hexa_p.c \
		ft_putchar_va_arg.c ft_putstr_va_arg.c ft_putnbr_unsigned_va_arg.c \
		ft_putnbr_va_arg.c ft_putnbr_unsigned.c ft_putnbr_hexa_va_arg_x.c ft_putnbr_hexa_va_arg_X.c\
		ft_putaddr_va_arg.c ft_printf.c get_next_line.c get_next_line_utils.c ft_strjoin_gnl.c \
		ft_atol.c

BON =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
		ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJSBON = ${BON:.c=.o}

OBJSRCS = ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

ARRC = ar rc

RM = rm -f

all: ${NAME}

clean:
	${RM} ${OBJSRCS} ${OBJSBON}

fclean: clean
	${RM} ${NAME}

bonus: ${NAME} ${OBJSBON}
	${ARRC} ${NAME} ${OBJSBON}
	ranlib ${NAME}

re: fclean all

$(NAME):${OBJSRCS}
	${ARRC} ${NAME} ${OBJSRCS}
	ranlib libft.a

.PHONY: clean all fclean re

