# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adouib <adouib@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 15:01:13 by adouib            #+#    #+#              #
#    Updated: 2021/12/20 11:25:58 by adouib           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRCS = push_swap.c sort_algo.c sort_utils.c stack_init.c\
		utils.c utils2.c error_handling.c operations.c

OBJS = $(SRCS:.c=.o)

NAME = push_swap

all: $(NAME)

$(NAME): $(OBJS)

clean:
	@$(RM) $(OBJS)
	
fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re