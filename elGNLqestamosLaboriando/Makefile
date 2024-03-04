# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 19:37:35 by egomez-g          #+#    #+#              #
#    Updated: 2023/09/21 19:22:34 by egomez-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line.a
BONUS_NAME = .bonus

SOURCES =	get_next_line.c	get_next_line_utils.c 

OBJECTS = $(SOURCES:.c=.o)

# En proceso:	BONUSS =	

BONUS_OBJS = $(BONUSS:.c=.o)

%.o: %.c
	gcc -c $(FLAGS) $< -o $@

FLAGS = -Wall -Wextra -Werror
REMOVE = rm -f
CC = cc



all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

bonus: $(BONUS_NAME)

clean:
	$(REMOVE) $(OBJECTS) $(BONUS_OBJS)

fclean: clean
	$(REMOVE) $(NAME) $(BONUS_NAME)

re : fclean all

$(BONUS_NAME): $(OBJECTS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJECTS) $(BONUS_OBJS)
	ar rcs $(BONUS_NAME) $(OBJECTS) $(BONUS_OBJS)

.PHONY: all clean fclean re
