# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/25 12:43:19 by mmurakam          #+#    #+#              #
#    Updated: 2020/05/16 19:04:08 by mmurakam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Binary name with extension
NAME = libft.a

# Path variables
HEADER_DIR = ./includes/
SRC_DIR = ./src
OBJ_DIR = ./obj
BONUS_DIR = ./src/bonus
BONUSOBJ_DIR = ./obj/bonus

# Wildcard usage to get all .h and .c files
HEADER := $(wildcard $(HEADER_DIR)*.h)
SRC := $(wildcard $(SRC_DIR)/*.c)
# patsubst usage create a new list changing SRC .c files into .o files
# that are in SRC_DIR
OBJ := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

# Wildcard usage to get all bonus .c files
BONUS_SRC := $(wildcard $(BONUS_DIR)/*.c)
# patsubst usage create a new list changing BONUS_SRC .c files into .o files
# that are in BONUS_DIR
BONUS_OBJ := $(patsubst $(BONUS_DIR)/%.c,$(BONUSOBJ_DIR)/%.o,$(BONUS_SRC))

# Compiler Variable
CC = gcc

# Flags for compilation
FLAGS = -Wall -Wextra -Werror

# Create the folder OBJ_DIR and compiles all .c functions in SRC_DIR
# using header .h in HEADER creating .o objects
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER)
	@mkdir -p ${OBJ_DIR}
	$(CC) $(FLAGS) -I $(HEADER_DIR) -c $< -o $@

# Create the folder BONUSOBJ_DIR and compiles all .c functions in BONUS_DIR
# using header .h in HEADER creating .o objects
$(BONUSOBJ_DIR)/%.o: $(BONUS_DIR)/%.c $(HEADER)
	@mkdir -p ${BONUSOBJ_DIR}
	$(CC) $(FLAGS) -I $(HEADER_DIR) -c $< -o $@

# Creates and links the binary file NAME with objects in OBJ
$(NAME): $(OBJ)
	ar rcs $@ $^
	ranlib $(NAME)

all:$(NAME)

clean:
	rm -rf $(OBJ) $(OBJ_DIR) $(BONUS_OBJ) $(BONUSOBJ_DIR)

fclean:
	rm -rf $(OBJ) $(OBJ_DIR) $(BONUS_OBJ) $(BONUSOBJ_DIR) $(NAME)

re:	fclean all

# Add and link to the binary NAME the bonus functions objects in BONUS_OBJ
# IMPORTANT: It does not create the binary, just add and link the bonus functions
# Run make before running make bonus
bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $^
	ranlib $(NAME)

norm:	norminette *.[ch]

.PHONY: clean fclean all re
