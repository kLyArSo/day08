SRCS = main.cpp
NAME = ex00
FLAGS = -Wall -Werror -Wextra -std=c++98
INCLUDES = easyfind.hpp

all : $(NAME)

$(NAME) : $(SRCS) $(INCLUDES)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean :
	rm -Rf $(NAME)
fclean : clean

re : fclean all