# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/25 12:43:19 by mmurakam          #+#    #+#              #
#    Updated: 2020/05/16 18:23:54 by mmurakam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER_DIR = ./includes/
SRC_DIR = ./src
OBJ_DIR = ./obj
BONUS_DIR = ./src/bonus
BONUSOBJ_DIR = ./obj/bonus

HEADER := $(wildcard $(HEADER_DIR)*.h)
SRC := $(wildcard $(SRC_DIR)/*.c)
OBJ := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

BONUS_SRC := $(wildcard $(BONUS_DIR)/*.c)
BONUS_OBJ := $(patsubst $(BONUS_DIR)/%.c,$(BONUSOBJ_DIR)/%.o,$(BONUS_SRC))

CC = gcc

FLAGS = -Wall -Wextra -Werror

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER)
	@mkdir -p ${OBJ_DIR}
	$(CC) $(FLAGS) -I $(HEADER_DIR) -c $< -o $@

$(BONUSOBJ_DIR)/%.o: $(BONUS_DIR)/%.c $(HEADER)
	@mkdir -p ${BONUSOBJ_DIR}
	$(CC) $(FLAGS) -I $(HEADER_DIR) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $@ $^
	ranlib $(NAME)

all:$(NAME)

clean:
	rm -rf $(OBJ) $(OBJ_DIR) $(BONUS_OBJ) $(BONUSOBJ_DIR)

fclean:
	rm -rf $(OBJ) $(OBJ_DIR) $(BONUS_OBJ) $(BONUSOBJ_DIR) $(NAME)

re:	fclean all

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $^
	ranlib $(NAME)

norm:	norminette *.[ch]

.PHONY: clean fclean all re
