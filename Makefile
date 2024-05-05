# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 16:10:32 by festeve-          #+#    #+#              #
#    Updated: 2024/04/22 16:22:37 by festeve-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk
CLIENT = client
SERVER = server
LIBFT = ./libft.c
MAINCLIENT = ./mainclient.c
MAINSERVER = ./mainserver.c
CC = gcc
CFLAGS = -Wall -Werror -Wextra

all : $(CLIENT) $(SERVER)

$(NAME) : all

$(CLIENT):
	$(CC) $(CFLAGS) client.c $(LIBFT) -o $(CLIENT) $(MAINCLIENT)
$(SERVER):
	$(CC) $(CFLAGS) server.c $(LIBFT) -o $(SERVER) $(MAINSERVER)

clean:
	rm -rf $(SERVER) $(CLIENT)

fclean: clean

re: fclean all
