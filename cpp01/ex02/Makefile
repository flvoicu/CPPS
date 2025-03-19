CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = mem_test

SRC = main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)
	
fclean: clean

re: clean all