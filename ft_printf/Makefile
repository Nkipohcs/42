# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 04:14:23 by nschwob           #+#    #+#              #
#    Updated: 2022/11/25 05:54:35 by nschwob          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 			libftprintf.a

SRCS =			libftprintf.c	\

SRCS_CONVERS=	convert_prct.c		convert_c.c		convert_i.c		convert_s.c		convert_x.c	\
				convert_XUP.c	convert_d.c		convert_p.c		convert_u.c					\


CFLAGS = -Wall -Wextra -Werror

CC = gcc $(CFLAGS)

RM = rm -f

SRCS_OBJS = ${SRCS:.c=.o}

$(NAME): $(SRCS_OBJS)

all:	$(NAME)
		ar -rc	$(NAME)	$(SRCS) $(SRCS_OBJS)

clean:	$(RM)	$(SRCS_OBJS)

fclean:	clean 
		$(RM)	$(NAME)

re:		fclean all
