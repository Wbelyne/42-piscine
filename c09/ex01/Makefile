# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpfeiffe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/23 16:23:57 by jpfeiffe          #+#    #+#              #
#    Updated: 2022/07/27 12:16:27 by jpfeiffe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = scrs/ft_putchar.c srcrs/ft_swap.c srcrs/ft_putstr.c srcrs/ft_strlen.c srcrs/ft_strcmp.c
CC = gcc
FLAGS = -Wall -werror -Wextra
OBJS = ${SRCS:.c=.o}
RM = rm -f
HEADERS = includes/ 


.c.o :
	${CC} ${FLAGS} -I ${HEADERS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	ar rc ${NAME} ${OBJS}

all :
	${NAME}

clean :
	${RM} ${OBJS} 

fclean : clean
	${NAME}

re : fclean all

