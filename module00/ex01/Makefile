
NAME = phonebook

SRC_FILES = main.cpp\
			phonebook.cpp\
			contact.cpp\
			column_print.cpp

OBJ = $(SRC_FILES:.cpp=.o)

FLAGS = -Wextra -Wall -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(FLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) -c $(FLAGS) -o $@ $^

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: clean all

.PHONY: all clean re
