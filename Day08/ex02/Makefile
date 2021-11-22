SRCS = main.cpp mutantstack.cpp
NAME = ex02
FLAGS = -Wall -Werror -Wextra -std=c++98
INCLUDES = mutantstack.hpp

all : $(NAME)

$(NAME) : $(SRCS) $(INCLUDES)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean :
	rm -Rf $(NAME)
fclean : clean

re : fclean all