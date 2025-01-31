# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avelandr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/30 10:43:48 by avelandr          #+#    #+#              #
#    Updated: 2024/12/30 11:40:31 by avelandr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME = ft_display_file
SRCS_DIR = srcs
SRCS = $(SRCS_DIR)/ft_display_file.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Reglas
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Executable compiled: $(NAME)"

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	@echo "Objects cleaned."

fclean: clean
	rm -f $(NAME)
	@echo "Executable cleaned."

re: fclean all

