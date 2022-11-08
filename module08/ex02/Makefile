
NAME = ex02

SRC = main.cpp

OBJ = $(addprefix obj/, $(SRC:.cpp=.o))

CXX = c++
CFLAGS = -Wextra -Wall -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CFLAGS) -o $@ $^

obj/%.o: %.cpp
		mkdir -p obj
		$(CXX) -c $(CFLAGS) -o $@ $^

clean:
		rm -rf obj

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
