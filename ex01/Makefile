# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/08 11:28:21 by rcochran          #+#    #+#              #
#    Updated: 2026/01/14 14:27:27 by rcochran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all clean fclean re

CC			= 	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98
NAME		=	Bureaucrat
OBJ_DIR		=	obj/
SRC			=	src/
INCLUDES	=	-I ./includes -MMD -MP
FILES		= 	$(SRC)Bureaucrat.cpp \
				$(SRC)Form.cpp \
				$(MAIN)

OBJ			=	$(patsubst $(SRC)%.cpp, $(OBJ_DIR)%.o, $(FILES))

MAIN		= 	$(SRC)main.cpp
all : $(NAME)

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

$(NAME) : $(OBJ_DIR) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(INCLUDES) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC)%.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR) :
	mkdir $(OBJ_DIR)