# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsahloul <lsahloul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/17 18:22:28 by lsahloul          #+#    #+#              #
#    Updated: 2025/04/24 21:16:52 by lsahloul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = client
NAME1 = server
SRC = client.c 
SRC1 = server.c 
OBJ = $(SRC:.c=.o)
OBJ1 = $(SRC1:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT = libft/libft.a

all: $(NAME) $(NAME1)

$(NAME) : $(OBJ)
	(cd libft && make)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)  -o $@

$(NAME1) : $(OBJ1)
	$(CC) $(CFLAGS) $(OBJ1) $(LIBFT) -o $(NAME1)  -o $@

clean:
	make -C libft clean
	rm -f *.o
	rm -f ./inc/*.o

fclean: clean
	make -C libft fclean
	rm -f client server
	rm -f

re: fclean all
