
NAME = ex01

SRC_FILES = main.cpp

OBJ = $(addprefix obj/, $(SRC_FILES:.cpp=.o))

CXX = c++
CFLAGS = -Wextra -Wall -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CFLAGS) -o $@ $^

obj/%.o: %.cpp
		@mkdir -p obj
		$(CXX) -c $(CFLAGS) -o $@ $^

clean:
		rm -rf obj

fclean: clean
		rm -rf $(NAME)

re: clean all

.PHONY: all clean re