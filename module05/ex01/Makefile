
NAME = ex01

SRC_FILES = main.cpp\
			Bureaucrat.cpp\
			Form.cpp

OBJ = $(SRC_FILES:.cpp=.o)

CXX = c++
FLAGS = -Wextra -Wall -Werror -std=c++98 -pedantic -g

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
