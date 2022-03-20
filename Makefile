# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/06 15:29:29 by jeounpar          #+#    #+#              #
#    Updated: 2022/03/20 23:07:08 by jeounpar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
BONUS		= checker
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
SRCS		= ./src/mandatory/errors.c \
	./src/mandatory/free_alloc.c \
	./src/mandatory/ft_atoi.c \
	./src/mandatory/ft_split.c \
	./src/mandatory/main.c \
	./src/mandatory/parser.c \
	./src/mandatory/quick_sort.c \
	./src/mandatory/solve.c \
	./src/mandatory/rotate_opertaion.c \
	./src/mandatory/push_operation.c \
	./src/mandatory/swap_operation.c \
	./src/mandatory/array_validation.c \
	./src/mandatory/reverse_rotate_opertaion.c \
	./src/mandatory/three_random_case.c \
	./src/mandatory/five_random_case.c \
	./src/mandatory/random_case.c \
	./src/mandatory/ft_strcmp.c \
	./src/mandatory/opertaion_with_output.c
OBJECTS		= $(SRCS:.c=.o)

BONUS_SRCS	= ./src/bonus/errors.c \
	./src/bonus/free_alloc.c \
	./src/bonus/ft_atoi.c \
	./src/bonus/ft_split.c \
	./src/bonus/main.c \
	./src/bonus/parser.c \
	./src/bonus/quick_sort.c \
	./src/bonus/rotate_opertaion.c \
	./src/bonus/push_operation.c \
	./src/bonus/swap_operation.c \
	./src/bonus/array_validation.c \
	./src/bonus/reverse_rotate_opertaion.c \
	./src/bonus/three_random_case.c \
	./src/bonus/five_random_case.c \
	./src/bonus/random_case.c \
	./src/bonus/ft_strcmp.c \
	./src/bonus/opertaion_with_output.c \
	./src/bonus/get_next_line_utils.c \
	./src/bonus/get_next_line.c
BONUS_OBJS	= $(BONUS_SRCS:.c=.o)

all			: $(NAME)

$(NAME)		: $(OBJECTS)
		$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean		:
		rm -f $(OBJECTS)
		rm -f $(BONUS_OBJS)

fclean		: clean
		rm -f $(NAME)
		rm -f $(BONUS)

bonus		: $(BONUS_OBJS)
		$(CC) $(CFLAGS) $(BONUS_OBJS) -o $(BONUS)

re			: fclean all