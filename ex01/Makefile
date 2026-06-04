# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/26 15:54:35 by clouden           #+#    #+#              #
#    Updated: 2026/06/03 23:01:26 by clouden          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME		=	animal_brains

SRCS		=	main.cpp \
				Animal.cpp \
				Dog.cpp \
				Cat.cpp \
OBJS		=	$(SRC:%.cpp=%.o)
INCL		=	Animal.hpp \
				Dog.hpp \
				Cat.hpp \

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

%.o: %.cpp $(INCL)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
