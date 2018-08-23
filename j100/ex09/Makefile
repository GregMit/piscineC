# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glamit <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/21 17:22:42 by glamit            #+#    #+#              #
#    Updated: 2018/08/22 19:55:02 by glamit           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op

FLAG = -Wall -Wextra -Werror
SRC = src/anex.c src/main.c src/op_res.c
HEADER = ft_opp.h struct.h

all: $(NAME)

$(NAME):
	gcc -I ./includes/ $(FLAG) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)
