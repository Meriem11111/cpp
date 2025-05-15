NAME = zombie
CC = c++
CFLAGS = -Wall -Wextra -Werror  -std=c++98 #-fsanitize=address -g3
CFILES = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OFILES = $(CFILES:.cpp=.o)

all: $(NAME)

$(NAME) : $(CFILES)
	$(CC) $(CFLAGS) $(CFILES) -o $(NAME)

clean :
	rm -rf $(OFILES)

fclean : clean
	rm -rf $(NAME)

re : fclean all