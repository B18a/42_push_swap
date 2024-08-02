# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 16:47:23 by ajehle            #+#    #+#              #
#    Updated: 2024/02/07 16:11:16 by ajehle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= push_swap
FLAGS	:= -Wall -Werror -Wextra
CC		:= cc
REMOVE	:= rm -f

LIB_LIBFT		:= ./libs/libft
LIB_FTPRINTF	:= ./libs/ft_printf

HEADERS			:= -I $(LIB_LIBFT) -I $(LIB_FTPRINTF) -I./include
LIBS			:= $(LIB_LIBFT)/libft.a $(LIB_FTPRINTF)/libftprintf.a

FUNCTIONS =	main.c \
			parse_input.c \
			helper.c \
			helper_push.c \
			helper_swap.c \
			helper_rotate.c \
			helper_rotate_reverse.c \
			sorting_three.c \
			sorting_five.c \
			handle_memory.c \
			median.c \
			check_order.c \
			prep_for.c \
			prep_back.c \
			move.c

OBJECTS = ${FUNCTIONS:.c=.o}

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(MAKE) -C $(LIB_LIBFT)
	$(MAKE) -C $(LIB_FTPRINTF)
	$(CC) $(FLAGS) $(OBJECTS) $(LIBS) $(HEADERS) -o $(NAME)

clean :
	$(MAKE) -C $(LIB_LIBFT) clean
	$(MAKE) -C $(LIB_FTPRINTF) clean
	$(REMOVE) $(OBJECTS)

fclean : clean
	$(MAKE) -C $(LIB_LIBFT) fclean
	$(MAKE) -C $(LIB_FTPRINTF) fclean
	$(REMOVE) $(NAME)

re : clean all

.PHONY : all, clean, fclean, re
