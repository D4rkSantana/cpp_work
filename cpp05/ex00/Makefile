# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/13 21:13:33 by esilva-s          #+#    #+#              #
#    Updated: 2023/08/11 00:19:26 by ryoshio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror

INCLUDES = Bureaucrat.hpp
SRC = main.cpp Bureaucrat.cpp
OBG = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBG)
	$(CC) $(FLAGS) $(OBG) -o $(NAME)


$(OBG): $(SRC) $(INCLUDES)
	$(CC) $(FLAGS) -c $(SRC)

clean:
	rm -rf $(OBG)

fclean: clean
	rm -rf $(NAME)

re: fclean all