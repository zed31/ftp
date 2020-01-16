NAME = ftp

SRC = src/main.cpp \
	  src/buffer.cpp

OBJ = $(SRC:.cpp=.o)

CFLAGS += -W -Wall -Wextra -I./include

$(NAME): $(OBJ)
		g++ -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all