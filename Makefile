# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adouib <adouib@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 15:01:13 by adouib            #+#    #+#              #
#    Updated: 2022/01/03 21:25:28 by adouib           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRCS = push_swap.c big_sort.c small_sort.c stack_init.c\
		list_utils.c arr_utils.c error_handling.c operations.c

OBJS = $(SRCS:.c=.o)

NAME = push_swap

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	@$(RM) $(OBJS)
	
fclean: clean
	@$(RM) $(NAME)

re: fclean all
