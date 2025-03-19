CXX = g++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = DiamondTrap

SRC = 	DiamondTrap.cpp \
		./FragTrap/FragTrap.cpp \
		./ScavTrap/ScavTrap.cpp \
		./ClapTrap/ClapTrap.cpp \
		main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)

re: fclean all%    
