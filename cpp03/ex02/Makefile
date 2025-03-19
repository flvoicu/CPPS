CXX = g++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = FragTrap

SRC = 	FragTrap.cpp \
		./ClapTrap/ClapTrap.cpp \
		main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)

re: fclean all%  
