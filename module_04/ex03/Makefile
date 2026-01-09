# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sacha <sacha@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/26 16:20:39 by sacha             #+#    #+#              #
#    Updated: 2025/07/01 16:39:10 by sacha            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=   ./aout

CC			=   c++

FLAG		=   -std=c++98 -Wall -Wextra -Werror -pedantic

C_FILES		=   main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJ_DIR		=   builds

OBJS		=   $(addprefix $(OBJ_DIR)/, $(C_FILES:.cpp=.o))

DEPS		=   $(OBJS:.o=.d)

all:		$(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CC) $(FLAG) -MMD -MP -c $< -o $@

$(NAME):	$(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJ_DIR)/*.o $(DEPS)
	rm -rf $(OBJ_DIR)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

-include $(DEPS)

.PHONY:	all clean fclean re