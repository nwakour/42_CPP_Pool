.PHONY: 		all fclean clean re

NAME			=	conversion

SRCS			=	conversion.cpp IntConv.cpp FloatConv.cpp DoubleConv.cpp

OBJS			=	${SRCS:.cpp=.o}

CC				= 	clang++

FLAGS           =  -Wall -Wextra -Werror -std=c++98

INCL 			=	-I includes -L includes

RM				= 	rm -f

all:			$(NAME)

$(NAME):	$(SRCS)
				@$(CC) $(FLAGS) -c $(SRCS) 
				@$(CC) $(FLAGS) -o $(NAME) $(OBJS) $(INCLUDE)
				@echo "conversion was created successfully"

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all