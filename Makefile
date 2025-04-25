# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 12:20:07 by bgazur            #+#    #+#              #
#    Updated: 2025/04/25 15:23:27 by bgazur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJS = ${SRCS:.c=.o}
OBJS_BONUS = ${SRCS_BONUS:.c=.o}
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c
SRCS += ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c
SRCS += ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRCS += ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c
SRCS += ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c
SRCS += ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c
SRCS += ft_tolower.c ft_toupper.c
SRCS_BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstdelone_bonus.c ft_lstlast_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

all: ${NAME}

bonus: ${NAME} ${OBJS_BONUS}
	ar rcs ${NAME} ${OBJS_BONUS}

clean:
	${RM} ${OBJS} ${OBJS_BONUS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all bonus clean fclean re
