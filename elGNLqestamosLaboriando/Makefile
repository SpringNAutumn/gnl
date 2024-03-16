# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/16 11:16:49 by gmarin-m          #+#    #+#              #
#    Updated: 2024/03/16 11:16:49 by gmarin-m         ###   ########.fr        #
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
