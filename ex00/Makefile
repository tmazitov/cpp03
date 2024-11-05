NAME=ex00

SRC=main.cpp \
	ClapTrap.cpp

FLAGS=-Wall -Wextra -Werror -std=c++98

all: $(SRC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

$(NAME): all

re: fclean all

fclean:
	rm -f $(NAME)