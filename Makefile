# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/19 05:53:34 by yciftci           #+#    #+#              #
#    Updated: 2023/03/19 06:13:55 by yciftci          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
PUSH_SWAP_FILES = $(shell find . -name "*.c")

all: 
	@make -C ./libft
	@mv ./libft/libft.a main
	@gcc -Wall -Wextra -Werror $(PUSH_SWAP_FILES) ./main/libft.a -o $(NAME)
	@echo "✅"

clean:
	@rm -rf ./libft/*.o
	@rm -rf ./main/libft.a
	@echo "🗑️"

fclean: clean
	@rm -rf push_swap

re: fclean all

norm:
	norminette