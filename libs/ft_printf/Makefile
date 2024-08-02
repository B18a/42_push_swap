# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 09:06:57 by ajehle            #+#    #+#              #
#    Updated: 2023/12/08 09:06:59 by ajehle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
FLAGS = -Wall -Werror -Wextra
CC = cc
REMOVE = rm -f

FUNCTIONS = ft_printf.c \
			ft_printf_helper.c

OBJECTS = ${FUNCTIONS:.c=.o}

all : $(NAME)

$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

$(OBJECTS) : $(FUNCTIONS)
	$(CC) $(FLAGS) -c $(FUNCTIONS)

clean :
		$(REMOVE) $(OBJECTS)

fclean : clean
		$(REMOVE) $(NAME)

re : fclean
		$(MAKE) all

.PHONY : all, clean, fclean, re
