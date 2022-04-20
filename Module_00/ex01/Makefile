# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/18 15:48:16 by nwakour           #+#    #+#              #
#    Updated: 2021/12/04 20:58:18 by nwakour          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: 		all fclean clean re

NAME			=	phonebook

SRCS			=	phonebook.class.cpp phonebook.cpp contact.class.cpp

OBJS			=	${SRCS:.cpp=.o}

CC				= 	clang++

FLAGS           =  -Wall -Wextra -Werror -std=c++98

INCL 			=	-I includes -L includes

RM				= 	rm -f

all:			$(NAME)

$(NAME):	$(SRCS)
				@$(CC) $(FLAGS) -c $(SRCS)
				@$(CC) $(FLAGS) -o $(NAME) $(SRCS) $(INCLUDE)
				@echo "Phonebook was created successfully"

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all