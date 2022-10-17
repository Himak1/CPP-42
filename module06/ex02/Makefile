
NAME = ex01

SRC_FILES = main.cpp\
			Base.cpp

OBJ = $(addprefix obj/, $(SRC_FILES:.cpp=.o))

CXX = c++
FLAGS = -Wextra -Wall -Werror

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CFLAGS) -o $@ $^

obj/%.o: %.cpp
		@mkdir -p obj
		$(CXX) -c $(FLAGS) -o $@ $^

clean:
		rm -rf obj

fclean: clean
		rm -rf $(NAME)

re: clean all

.PHONY: all clean re