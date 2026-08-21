# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: equintas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/19 17:58:19 by equintas          #+#    #+#              #
#    Updated: 2026/08/19 17:58:21 by equintas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = ScalarConverter.hpp \
		 PrintUtils.hpp \
		 ScalarUtils.hpp

OBJS = ScalarConverter.o \
	   ScalarUtils.o \
	   PrintUtils.o \
	   main.o

NAME = Convert

all: $(NAME)

$(OBJS): $(HEADER)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
