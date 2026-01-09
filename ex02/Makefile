# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sacha <sacha@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/15 19:49:18 by sacha             #+#    #+#              #
#    Updated: 2025/05/17 14:15:49 by sacha            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=   Brain

CC			=   c++

FLAG		=   -std=c++98 -Wall -Wextra -Werror -pedantic

C_FILES		=   main.cpp
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