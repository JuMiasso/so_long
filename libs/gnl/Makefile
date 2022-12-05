# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlopes-m <jlopes-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/03 14:57:17 by jlopes-m          #+#    #+#              #
#    Updated: 2022/12/05 16:43:09 by jlopes-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libftgnl.a

FLAGS = -Wall -Werror -Wextra

SRCS =	get_next_line.c \
		get_next_line_utils.c \

OBJS = $(SRCS:.c=.o)

all :	$(NAME)
			
$(NAME) :	$(OBJS)
			ar rc $(NAME) $(OBJS)

%.o :	%.c
			$(CC) $(FLAGS) -c -o $@ $<
	
clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

