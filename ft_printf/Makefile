# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpicheca <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 16:15:51 by mpicheca          #+#    #+#              #
#    Updated: 2023/02/28 10:58:24 by mpicheca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	libftprintf.a

SRC=	ft_printf.c\
				caratteri.c\
				numeri.c\
				puntatori.c\
				howlong.c

OBJ=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -c $(SRC)
		ar -rcs $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean, all

.PHONY: all, clean, fclean, re
