#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/27 13:18:15 by rmc-coma          #+#    #+#              #
#    Updated: 2016/03/14 20:19:25 by rmc-coma         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fdf

CC = gcc
CFLAGS = -Wall -Werror -Wextra -Ofast -O3
LFLAGS = -framework OpenGL -framework AppKit

HDR = 	-I ./libft/include/libft.h \
		-I ./libft/include/get_next_line.h \
		-I ./libmatrices/libmatrices.h \
		-I ./minilibx/mlx.h

LIB =	./libft/libft.a \
		./libmatrices/libmatrices.a \
		./minilibx/libmlx.a

SRC =	main.c \
		fdf_parse.c fdf_init.c fdf_display.c fdf_draw_line.c fdf_expose.c \
		fdf_close.c fdf_input_keyboard.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME):
	make -C ./libft
	make -C ./libmatrices
	make -C ./minilibx
	$(CC) $(CFLAGS) $(HDR) -c $(SRC)
	$(CC) $(CFLAGS) $(LFLAGS) -o $(NAME) $(OBJ) $(LIB)

clean:
	make -C ./libft clean
	make -C ./libmatrices clean
	make -C ./minilibx clean
	rm -f $(OBJ)
	rm -f *~

fclean: clean
	make -C ./libft fclean
	make -C ./libmatrices fclean
	make -C ./minilibx fclean
	rm -f $(NAME)

re: fclean all