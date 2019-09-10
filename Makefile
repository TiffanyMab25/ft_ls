# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tiffany_mab_ <marvin@42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/10 14:41:46 by tiffany_m         #+#    #+#              #
#    Updated: 2019/09/10 14:56:35 by tiffany_m        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls

LIBFT = libft/libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC =	opendir.c\

OBJ =	$(SRC:.c=.o)

all: $(NAME)

$(NAME):
		make -C libft all
		$(CC) $(CFLAGS) $(SRC) $(LIBFT) -o $(NAME)

clean:
		make -C libft clean
		rm -f $(OBJ)

fclean: clean
		make -C libft fclean
		rm -f $(NAME)

re: fclean all

