CXX = g++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = MyAwesomePhonebook

SRC = 	contact/Contact.cpp \
		phonebook/PhoneBook.cpp \
		utils/Utils.cpp\
		main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all