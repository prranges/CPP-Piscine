# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prranges <prranges@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 15:44:27 by prranges          #+#    #+#              #
#    Updated: 2022/03/04 16:39:04 by prranges         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= hi_this_is_brain

SRCS		= main.cpp

CC			= clang++
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

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $@

clean:
	$(RM) $(OBJS_DIR)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:		all clean fclean re