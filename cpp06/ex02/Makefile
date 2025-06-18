NAME = convert
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
SRCS = main.cpp Base.cpp 
OFILES = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OFILES)
		$(CC) $(FLAGS) $(OFILES) -o $(NAME)

clean :
		rm -rf $(OFILES)

fclean: clean
		rm -rf $(NAME)

re: fclean all