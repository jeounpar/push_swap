# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/06 15:29:29 by jeounpar          #+#    #+#              #
#    Updated: 2022/03/20 18:33:17 by jeounpar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
CC			= gcc
CFLAGS		= 
SRCS		= errors.c \
	free_alloc.c \
	ft_atoi.c \
	ft_split.c \
	main.c \
	parser.c \
	quick_sort.c \
	solve.c \
	rotate_opertaion.c \
	push_operation.c \
	swap_operation.c \
	array_validation.c \
	reverse_rotate_opertaion.c \
	three_random_case.c \
	five_random_case.c \
	random_case.c \
	opertaion_with_output.c
OBJECTS		= $(SRCS:.c=.o)

all			: $(NAME)

$(NAME)		: $(OBJECTS)
		$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean		:
		rm -f $(OBJECTS)

fclean		: clean
		rm -f $(NAME)

bonus		:

re			: fclean all