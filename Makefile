# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlopes-m <jlopes-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/26 15:18:10 by jlopes-m          #+#    #+#              #
#    Updated: 2022/12/07 18:01:54 by jlopes-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

# lors de la compilation: make FLAGS+=-g pour débugger

NAME = so_long

FLAGS = -Wall -Werror -Wextra

SRCS_FILES =	main.c \
				parsing.c

SRC_PATH = ./srcs/
SRC = $(addprefix $(SRC_PATH), $(SRCS_FILES))

OBJS_FILES = $(SRCS_FILES:.c=.o)
OBJS_PATH  = ./objs/
OBJS = $(addprefix $(OBJS_PATH), $(OBJS_FILES))

INC = -I./includes/

LIBS = -L./libs/libft -lft -L./libs/printf -lftprintf -L./libs/gnl -lftgnl -L./libs/minilibx-linux -lmlx -lXext -lX11 -lm -lz

$(NAME) :	$(OBJS)
			make -C ./libs/libft/
			make -C ./libs/gnl/
			make -C ./libs/printf/
			make -C ./libs/minilibx-linux/
			$(CC) $(FLAGS) $(OBJS) $(LIBS) -o $(NAME)

$(OBJS_PATH)%.o:$(SRC_PATH)%.c
		@mkdir -p $(OBJS_PATH)
		$(CC) $(FLAGS) $(INC) -o $@ -c $<
			
all :	$(NAME)

clean :
	make clean -C ./libs/libft/
	make clean -C ./libs/printf/
	make clean -C ./libs/gnl/
	make clean -C ./libs/minilibx-linux/
	@rm -rf $(OBJS_PATH)

fclean : clean
	make fclean -C ./libs/libft/
	make fclean -C ./libs/printf/
	make fclean -C ./libs/gnl/
	@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re