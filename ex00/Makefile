# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hloki <hloki@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 17:17:09 by hloki             #+#    #+#              #
#    Updated: 2022/04/30 16:10:56 by hloki            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone
CC		=	g++
CFLAGS	=	-c -Wall -Wextra -Werror -std=c++98 -I .
LDFLAGS	= 	-I .
SOURCES	=	megaphone.cpp
OBJECTS	=	$(SOURCES:.cpp=.o)

all: $(SOURCES) $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all