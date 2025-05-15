
NAME = my_claptrap
CC = c++
CFLAGS = -Wall -Wextra -Werror  -std=c++98 
CFILES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OFILES = $(CFILES:.cpp=.o)

all: $(NAME)

$(NAME) : $(CFILES)
	$(CC) $(CFLAGS) $(CFILES) -o $(NAME)

clean :
	rm -rf $(OFILES)

fclean : clean
	rm -rf $(NAME)

re : fclean all