# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/13 14:10:21 by atabarea          #+#    #+#              #
#    Updated: 2026/04/16 12:01:33 by atabarea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= FragTrap
CXX			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= \
	ScavTrap.cpp \
	ClapTrap.cpp \
	FragTrap.cpp \
	main.cpp

OBJS	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)  

%.o: %.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re