# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 20:34:36 by cnorma            #+#    #+#              #
#    Updated: 2022/05/07 19:35:33 by cnorma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	a.out

SRC			=	main.cpp	ClapTrap.cpp	ScavTrap.cpp	FragTrap.cpp

SRC_RIR 	=	./

OBJ_DIR		=	./obj/

OBJ			=	$(patsubst $(SRC_DIR)%, $(OBJ_DIR)%, $(SRC:.cpp=.o))

HEADER		=	./ClapTrap.hpp	./ScavTrap.hpp	./FragTrap.hpp

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror -g -std=c++98 -O2


all:			$(OBJ_DIR) $(NAME)

$(OBJ_DIR)%.o:	%.cpp $(HEADER)
				$(CC) $(FLAGS) -c $< -o $@

$(NAME):		$(OBJ) $(HEADER)
				$(CC) $(FLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR):
				@mkdir -p $@

clean:
				@rm -rf $(OBJ) $(OBJ_DIR)

fclean:			clean
				@rm -f $(NAME)

re:				fclean all

.PHONY:			all re clean fclean
