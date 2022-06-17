
NAME = ex03

SRC_FILES = main.cpp\
			AMateria.cpp\
			Ice.cpp\
			Cure.cpp

OBJ = $(SRC_FILES:.cpp=.o)

CXX = c++
FLAGS = -Wextra -Wall -Werror -std=c++98 -pedantic

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
