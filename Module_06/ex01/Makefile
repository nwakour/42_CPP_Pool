.PHONY: 		all fclean clean re

NAME			=	serialization

SRCS			=	serialization.cpp

OBJS			=	${SRCS:.cpp=.o}

CC				= 	clang++

FLAGS           =  -Wall -Wextra -Werror -std=c++98

INCL 			=	-I includes -L includes

RM				= 	rm -f

all:			$(NAME)

$(NAME):	$(SRCS)
				@$(CC) $(FLAGS) -c $(SRCS) 
				@$(CC) $(FLAGS) -o $(NAME) $(OBJS) $(INCLUDE)
				@echo "serialization was created successfully"

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all