# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeongyle <jeongyle@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 16:16:50 by jeongyle          #+#    #+#              #
#    Updated: 2022/12/29 22:59:12 by jeongyle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar
ARFLAGS = crs

INCLUDES = ./libftprintf.h

SRCS =	ft_printf.c		\
		ft_print_cs.c	\
		ft_print_diu.c	\
		ft_print_xXp.c	\

OBJS = $(SRCS:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $^

.PHONY : all clean fclean re