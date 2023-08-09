# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 14:54:29 by luisanto          #+#    #+#              #
#    Updated: 2023/08/09 17:20:28 by luisanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
CC = gcc -Wall -Werror -Wextra
SRC = ft_strlen.c ft_strdup.c ft_substr.c ft_strtrim.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_strncmp.c ft_strmapi.c ft_strlcpy.c ft_strlcat.c ft_strjoin.c ft_striteri.c ft_strchr.c ft_split.c ft_putstr_fd.c ft_putnubr_fd.c ft_putendl_fd.c ft_putchar_fd.c ft_memset.c ft_memmove.c ft_memcpy.c ft_memcmp.c ft_itoa.c ft_isprint.c ft_isdigit.c ft_isascii.c ft_isalpha.c ft_isalnum.c ft_calloc.c ft_bzero.c ft_atoi.c 

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRC)
	
clean:
	rm -rf *.o

fclean: clean
	rm $(NAME)

re: fclean all