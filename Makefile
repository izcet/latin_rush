# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/29 13:45:56 by irhett            #+#    #+#              #
#    Updated: 2018/01/29 13:47:46 by irhett           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	latin

CC			=	clang
FLAGS		=	-Wall -Werror -Wextra

SRC_DIR		=	ft_latin
SRC_FILE	=	main.c ft_latin.c
SRCS		=	$(addprefix $(SRC_DIR)/, $(SRC_FILE))

OBJ_DIR		=	obj
OBJ_FILE	=	$(SRC_FILE:.c=.o)
OBJS		=	$(addprefix $(OBJ_DIR)/, $(OBJ_FILE))

INC_DIR		=	-I inc

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRCS) | $(OBJS)
	$(CC) $(FLAGS) $(OBJS) $(INC_DIR) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) -c $^ $(CFLAGS) $(INC_DIR) -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
