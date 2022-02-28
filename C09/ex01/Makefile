# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esali <esali@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/30 11:09:22 by esali             #+#    #+#              #
#    Updated: 2021/09/30 11:09:24 by esali            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_strlen.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS	= ${SRCS:.c=.o}	
NAME	= libft.a
INS		= includes
RUN		= ar rc
CC		= gcc
RM		= rm -f
RL		= ranlib
CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${CC} ${CGLAGS} -c $< -o ${<:.c=.o} -I${INS}


${NAME}:	${OBJS}
			${RUN} ${NAME} ${OBJS}
			${RL} ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all	
.PHONY:		all clean fclean re .c.o