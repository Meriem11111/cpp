NAME = Animal
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g3
SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OFILES = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME) : $(OFILES)
	$(CC) $(FLAGS) $(OFILES) -o $(NAME)

clean :
	rm -rf $(OFILES)
fclean: clean
	rm -rf $(NAME)
re: fclean all
