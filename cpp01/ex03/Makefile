CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = violence_test

SRC = main.cpp \
      ./weapon/Weapon.cpp \
      ./humanA/HumanA.cpp \
      ./humanB/HumanB.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)

re: clean all