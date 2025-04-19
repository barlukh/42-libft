# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 12:20:07 by bgazur            #+#    #+#              #
#    Updated: 2025/04/19 17:21:08 by bgazur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ${wildcard ft_*.c}
OBJS = ${SRCS:.c=.o}
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
TEST_SRC = tests.c
TEST_OBJ = ${TEST_SRC:.c=.o}
TEST_EXE = test_libft

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

test: ${NAME} ${TEST_OBJ}
	${CC} ${CFLAGS} -o ${TEST_EXE} ${TEST_OBJ} ${NAME}

clean:
	${RM} ${OBJS} ${TEST_OBJ}

fclean: clean
	${RM} ${NAME} ${TEST_EXE}

re: fclean all

.PHONY: all clean fclean re test
