NAME = ClapTrap
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
OFILES = $(CFILES:.cpp=.o)
SRCS = main.cpp ClapTrap.cpp

all: $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
	rm -rf $(OFILES)
fclean: clean
	rm -rf $(NAME)
re: fclean all
