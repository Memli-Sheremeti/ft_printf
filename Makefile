# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mshereme <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 09:45:45 by mshereme          #+#    #+#              #
#    Updated: 2023/11/21 09:28:30 by mshereme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = format_alpha.c format.c format_digit.c ft_printf.c 

HEAD = ft_printf.h

OBJ = ${SRC:.c=.o}

CC = cc

RM = rm -rf

FLAG = -Wall -Wextra -Werror

AR = ar -rc

all : ${NAME}

.c.o :
	${CC} ${FLAG} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME} : ${OBJ}
	${AR} ${NAME} ${OBJ}

clean : 
	${RM} ${OBJ}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re
