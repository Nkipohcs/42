# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 04:22:52 by nschwob           #+#    #+#              #
#    Updated: 2022/11/22 03:52:38 by nschwob          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_PATH = ./

SRCS =  		ft_isalpha.c		ft_memcmp.c		ft_putnbr_fd.c	ft_strjoin.c	\
				ft_strnstr.c		ft_atoi.c		ft_isdigit.c	ft_memmove.c	\
				ft_split.c			ft_strlcpy.c	ft_strtrim.c	ft_bzero.c		\
				ft_isprint.c		ft_memset.c 	ft_strchr.c		ft_strlen.c		\
				ft_substr.c 		ft_calloc.c		ft_itoa.c		ft_putchar_fd.c	\
				ft_strdup.c			ft_strmapi.c	ft_tolower.c 	ft_isalnum.c	\
				ft_memchr.c			ft_putendl_fd.c ft_striteri.c	ft_strncmp.c	\
				ft_toupper.c 		ft_isascii.c	ft_memcpy.c		ft_strlcat.c	\
				ft_strrchr.c		ft_putstr_fd.c	ft_toupper.c					\

BONUS_SRCS =	ft_lstnew.c			ft_lstadd_front.c	ft_lstsize.c	ft_lstlast.c\
				ft_lstadd_back.c	ft_lstdelone.c		ft_lstclear.c	ft_lstiter.c\
				ft_lstmap.c															\

SRCS_OBJS = ${SRCS:.c=.o}

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = gcc $(CFLAGS)

RM	= rm -f

$(NAME): $(SRCS_OBJS)
	ar rc $(NAME) $(SRCS_OBJS)

#**--------------------------------------------------------------------------**#
#\\\								RULES		      					    ///#
#****----------------------------------------------------------------------****#

all:	$(NAME)

bonus:	$(SRCS_OBJS) $(BONUS_OBJS)
		ar rc $(NAME) $(SRCS_OBJS) $(BONUS_OBJS)
clean:	
	$(RM) $(SRCS_OBJS) $(BONUS_OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

so:
	$(SRCS_OBJS) $(BONUS_OBJS)