
NAME = ex04

SRC_FILES = main.cpp
			
OBJ = $(SRC_FILES:.cpp=.o)

FLAGS = -Wextra -Wall -Werror -std=c++98 -g

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(FLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) -c $(FLAGS) -o $@ $^

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)
		rm -rf main.cpp.replace

re: clean all

test:
		./ex04 main.cpp std yeet
		cat main.cpp.replace

.PHONY: all clean re
