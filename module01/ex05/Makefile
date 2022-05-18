
NAME = ex05

SRC_FILES = main.cpp\
			Harl.cpp
			
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

re: clean all

test: $(NAME)
	./ex05 INFO
	./ex05 DEBUG
	./ex05 WARNING
	./ex05 ERROR
	./ex05 adladladj
	./ex05

.PHONY: all clean re
