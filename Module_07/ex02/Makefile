# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: d1ma5 <d1ma5@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 15:26:33 by d1ma5             #+#    #+#              #
#    Updated: 2022/03/21 18:35:58 by d1ma5            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= array

SRCS		= main.cpp

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

$(NAME): $(OBJS) ./Array.hpp
	$(CC) $(OBJS) -o $@

clean:
	$(RM) $(OBJS_DIR)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:		all clean fclean re