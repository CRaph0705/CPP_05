# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/08 11:28:21 by rcochran          #+#    #+#              #
#    Updated: 2026/01/15 17:57:41 by rcochran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all clean fclean re

CC			= 	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98
NAME		=	Bureaucrat
OBJ_DIR		=	obj/
SRC			=	src/
INCLUDES	=	-I ./includes -MMD -MP
FILES		= 	$(MAIN) \
				$(SRC)AForm.cpp \
				$(SRC)Bureaucrat.cpp \
				$(SRC)PresidentialPardonForm.cpp \
				$(SRC)RobotomyRequestForm.cpp \
				$(SRC)ShrubberyCreationForm.cpp

				
EXT			=	.cpp
OBJ			=	$(patsubst $(SRC)%$(EXT), $(OBJ_DIR)%.o, $(FILES))

MAIN		= 	$(SRC)main$(EXT)
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