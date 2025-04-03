NAME = megaphone
CC = c++
CFLAGS =  -Wall -Wextra -Werror -std=c++98
SRCS = megaphone.cpp
OFILES = $(SRCS:.cpp=.o)

RED = "\033[0;31m"
GREEN0 = "\033[32m"
RED = "\033[0;31m"
BLUE = "\033[34m"
YELLOW = \033[0;33m
PURPLE = "\033[0;35m"
RESET = \033[0m

all: $(NAME)

$(NAME) : $(OFILES)
	@$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
	@echo $(GREEN0) ✨ Compilation done ✨

clean :
	@echo $(PURPLE) cleaning ...
	@rm -rf $(OFILES)

fclean : clean
	@rm -rf $(NAME)
	@echo $(RED) ✨ Done cleaning ✨

re : fclean all
.SILENT : $(OFILES)