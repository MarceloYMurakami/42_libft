# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/25 12:43:19 by mmurakam          #+#    #+#              #
#    Updated: 2020/05/16 17:07:03 by mmurakam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_DIR = ./src
OBJ_DIR = ./obj
HEADER_DIR = ./includes/
BONUS_DIR = ./bonus

HEADER := $(wildcard $(HEADER_DIR)*.h)
SRC := $(wildcard $(SRC_DIR)/*.c)
OBJ := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

BONUS_SRC = $(wildcard $(BONUS_DIR)/*.c)
BONUS_OBJ = $(patsubst $(BONUS_DIR)/%.c,$(OBJ_DIR)/%.o,$(BONUS_SRC))

CC = gcc

FLAGS = -Wall -Wextra -Werror

all:$(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^
	ranlib $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER)
	@mkdir -p ${OBJ_DIR}
	$(CC) $(FLAGS) -I $(HEADER_DIR) -c $< -o $@

clean:
	rm -rf $(OBJ) $(OBJ_DIR)

fclean:
	rm -rf $(OBJ) $(OBJ_DIR) $(NAME)

re:	fclean all

bonus:	$(OBJ_DIR)/%.o: $(BONUS_DIR)/%.c $(HEADER)
	$(CC) $(FLAGS) -I $(HEADER_DIR) -c $< -o $@
	ar rc $(NAME) $(BONUS_OBJ)
	ranlib $(NAME)

norm:	norminette *.[ch]

.PHONY: clean fclean all re
