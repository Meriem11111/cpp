NAME = phone
CC = c++
CFLAGS =  -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp contact.cpp phonebook.cpp
OFILES = $(SRCS:.cpp=.o)

RED = "\033[0;31m"
GREEN = "\033[32m"
RED = "\033[0;31m"
BLUE = "\033[34m"
YELLOW = \033[0;33m
PURPLE = "\033[0;35m"
GRAY = "\033[1;30m"
RESET =  "\033[0m"


all: $(NAME)

$(NAME) : $(OFILES)
	@$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
	@echo $(GREEN) ✨ Compilation done ✨

clean :
	@echo $(PURPLE) cleaning ...
	@rm -rf $(OFILES)

fclean : clean
	@rm -rf $(NAME)
	@echo $(RED) ✨ Done cleaning ✨

re : fclean all
.SILENT : $(OFILES)