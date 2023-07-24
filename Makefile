# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 14:54:29 by luisanto          #+#    #+#              #
#    Updated: 2023/07/20 14:56:46 by luisanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
CC = gcc -Wall -Werror -Wextra
SRC =

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRC)
	
clean:
	rm -rf *.o

fclean: clean
	rm $(NAME)

re: fclean all
