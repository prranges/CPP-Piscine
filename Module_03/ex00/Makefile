# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prranges <prranges@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 17:22:58 by prranges          #+#    #+#              #
#    Updated: 2022/03/11 17:18:16 by prranges         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= claptrap

SRCS		= main.cpp \
			  ClapTrap.cpp

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

RM			= rm -rf

OBJS_DIR 	= temp

OBJS	= $(addprefix $(OBJS_DIR)/,$(SRCS:.cpp=.o))

HDR	= -I./

all: $(NAME)

$(OBJS_DIR):
	mkdir $@

$(OBJS_DIR)/%.o: %.cpp Makefile $(OBJS_DIR)
	$(CC) $(CFLAGS) $(HDR) -c $< -o $@

$(NAME): $(OBJS) ./ClapTrap.hpp
	$(CC) $(OBJS) -o $@

clean:
	$(RM) $(OBJS_DIR)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:		all clean fclean re