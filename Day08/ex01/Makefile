SRCS = main.cpp span.cpp
NAME = ex01
FLAGS = -Wall -Werror -Wextra -std=c++98
INCLUDES = span.hpp

all : $(NAME)

$(NAME) : $(SRCS) $(INCLUDES)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean :
	rm -Rf $(NAME)
fclean : clean

re : fclean all