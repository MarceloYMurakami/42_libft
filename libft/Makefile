# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmurakam <mmurakam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/25 12:43:19 by mmurakam          #+#    #+#              #
#    Updated: 2020/02/02 17:57:32 by mmurakam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SCRIPT = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c

SCRIPTOBJ = ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strlen.o ft_strlcpy.o ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strnstr.o

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
