NAME = bureau
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Bureaucrat.cpp AForm.cpp Intern.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
OFILES = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OFILES)
		$(CC) $(FLAGS) $(OFILES) -o $(NAME)

clean :
		rm -rf $(OFILES)

fclean: clean
		rm -rf $(NAME)

re: fclean all