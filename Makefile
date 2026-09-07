CC:=cc
CFLAGS:=-Wall -Wextra -Werror
NAME:=codexion
SRC_DIR:=coders
SRCS_FILES:=main.c
SRCS:=$(addprefix $(SRC_DIR)/, $(SRCS_FILES))
OBJ=$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: $(NAME) all clean fclean re
