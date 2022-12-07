# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 04:14:23 by nschwob           #+#    #+#              #
#    Updated: 2022/11/27 06:26:12 by nschwob          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPARE_SRC=./compare/compare_ft_printf.c

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


# TESTER 

https://github.com/gavinfielder/pft # basic unit tests
https://github.com/Mazoise/42TESTERS-PRINTF # multiple flags
https://github.com/cacharle/ft_printf_test # randomly generated