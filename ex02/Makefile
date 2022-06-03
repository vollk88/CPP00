# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hloki <hloki@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 17:17:09 by hloki             #+#    #+#              #
#    Updated: 2022/05/28 18:19:28 by hloki            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	account
CC		=	g++
CFLAGS	=	-c -Wall -Wextra -Werror -std=c++98 -I .
LDFLAGS	= 	-I .
SOURCES	=	Account.cpp tests.cpp
HEADERS =	Account.hpp
OBJECTS	=	$(SOURCES:.cpp=.o)

all: $(SOURCES) $(NAME)

$(NAME): $(OBJECTS) $(HEADERS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all