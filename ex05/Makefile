# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/10 13:39:48 by malleman          #+#    #+#              #
#    Updated: 2024/01/10 17:05:37 by malleman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#-------------------------- SOURCES -------------------------------------------#
SRCS 		=	main.cpp Harl.cpp\

#--------------------------	VARIABLES -----------------------------------------#
NAME		= Harl

OBJS		= ${SRCS:.cpp=.o}

CC			= g++
CFLAGSDDBUG	= -Wall -Wextra -Werror -std=c++98
CFLAGS		= -Wall -Wextra -Werror -std=c++98
#-------------------------- COMMANDES -----------------------------------------#
all: 	${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean :
		rm -f ${OBJS}

fclean : clean
		rm -f ${NAME}

re: 	fclean all

.PHONY: all clean fclean re