# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glamit <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/18 13:08:10 by glamit            #+#    #+#              #
#    Updated: 2018/08/22 17:11:30 by glamit           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAG = -Wall -Wextra -Werror
SRC = srcs/*.c 
HEADER = *.h

all: $(NAME)

$(NAME):
	gcc -I ./includes/ $(FLAG) -c $(SRC)
	ar rc $(NAME) *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
