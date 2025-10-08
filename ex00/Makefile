CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# To Enable colors: make COLOR=1
ifeq ($(COLOR),1)
	CFLAGS += -DUSE_COLOR
endif

NAME = ClapTrap
SRC = $(NAME).cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all