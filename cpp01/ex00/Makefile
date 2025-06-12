# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/16 15:23:44 by juhanse           #+#    #+#              #
#    Updated: 2025/06/12 13:50:09 by juhanse          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

COLOUR_GREEN=\033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_BLUE=\033[0;34m
COLOUR_END=\033[0m

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
SRC_OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC_OBJS)
	$(CC) $(CFLAGS) $(SRC_OBJS) -o $(NAME)
	@echo "$(COLOUR_GREEN)Compiled ✅$(COLOUR_END)"

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(SRC_OBJS)
	@echo "$(COLOUR_RED)Cleaned 🧹$(COLOUR_END)"

fclean: clean
	rm -f $(NAME)
	@echo "$(COLOUR_RED)Cleaned all 🧹$(COLOUR_END)"

re: fclean all

.PHONY: all clean fclean re
