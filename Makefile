# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/25 12:43:19 by mmurakam          #+#    #+#              #
#    Updated: 2020/01/25 18:55:01 by mmurakam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SCRIPT = ft_memset.c ft_bzero.c ft_memcpy.c  ft_memccpy.c ft_strlen.c

SCRIPTOBJ = ft_memset.o ft_bzero.o ft_memcpy.o  ft_memccpy.o ft_strlen.o

SCRIPTABJ = libft.a

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):		$(SCRIPT) libft.h
		gcc $(FLAGS) -I./ -c $(SCRIPT)
		ar rc $(NAME) $(SCRIPTOBJ)
		ranlib $(NAME)

clean:
		rm -f $(SCRIPTOBJ)

fclean:
		rm -f $(SCRIPTOBJ) $(SCRIPTABJ)

re:		fclean all

norm:
		norminette *.[ch]