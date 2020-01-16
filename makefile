NAME = ftp

SRC = src/main.cpp \
	  src/buffer.cpp

OBJ = $(SRC:.cpp=.o)

CXXFLAGS += -W -Wall -Wextra -I./include -std=c++1y

$(NAME): $(OBJ)
		g++ -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all