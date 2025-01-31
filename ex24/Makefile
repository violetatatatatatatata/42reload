# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avelandr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/30 10:43:48 by avelandr          #+#    #+#              #
#    Updated: 2024/12/30 11:00:36 by avelandr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME = libft.a
SRCS_DIR = srcs
SRCS = $(SRCS_DIR)/ft_putchar.c $(SRCS_DIR)/ft_putstr.c $(SRCS_DIR)/ft_strcmp.c $(SRCS_DIR)/ft_strlen.c $(SRCS_DIR)/ft_swap.c
OBJS = $(SRCS:.c=.o)
INCLUDES = -I includes
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Reglas
all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library compiled: $(NAME)"

%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "Objects cleaned."

fclean: clean
	@rm -f $(NAME)
	@echo "Library cleaned."

re: fclean all

