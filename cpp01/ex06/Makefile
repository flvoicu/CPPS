CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = harlFilter

SRC = main.cpp  Harl.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)

fclean: clean

re: clean all