#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/27 13:18:15 by rmc-coma          #+#    #+#              #
#    Updated: 2016/03/14 20:20:56 by rmc-coma         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libmatrices

CC = gcc
CFLAGS = -Wall -Werror -Wextra -Ofast -O3

HDR = ./libmatrices.h

SRC =	m_vec4ini.c m_vec4val.c m_vec4new.c m_vec4set.c m_vec4cpy.c m_vec4to3.c	\
		m_vec3ini.c m_vec3val.c m_vec3new.c m_vec3set.c m_vec3cpy.c m_vec3to2.c	\
		m_vec2ini.c m_vec2val.c m_vec2new.c m_vec2set.c m_vec2cpy.c m_vec2add.c	\
		m_mat4ini.c m_mat4val.c m_mat4idt.c m_mat4new.c m_mat4set.c m_mat4cpy.c \
		m_vec3add.c m_vec3sub.c m_vec3mag.c m_vec3dot.c m_vec3cos.c m_vec3ang.c \
		m_vec3nrm.c	m_vec3crs.c	m_vec4add.c m_vec4sub.c	m_vec2mag.c m_vec2nrm.c	\
		m_mat4add.c m_mat4sub.c m_mat4mul.c m_mat4trs.c m_mat4scl.c m_mat4rot.c \
		m_mat4vec4mul.c m_mat4pro.c m_mat4lat.c m_vec2sub.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -I $(HDR) -c $(SRC)
	ar rc $(NAME).a $(OBJ)
	ranlib $(NAME).a

clean:
	-@rm -rf $(OBJ)
	-@rm -rf main.o
	-@rm -rf *~

fclean: clean
	-@rm -rf $(NAME)
	-@rm -rf $(NAME).a

re: fclean all
