CXX = g++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = test

SRC =	./Animal/Animal.cpp \
		./WrongAnimal/WrongAnimal.cpp \
		./Dog/Dog.cpp \
		./Cat/Cat.cpp \
		./WrongCat/WrongCat.cpp \
		main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)
