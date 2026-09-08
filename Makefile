CC:=cc
CFLAGS:=-Wall -Wextra -Werror
NAME:=codexion
SRC_DIR:=coders
SRCS_FILES:=main.c parser.c utils.c
HEADERS_DIR=headers
HEADERS_FILES:=parser.h utils.h
HEADERS:=$(addprefix $(SRC_DIR)/$(HEADERS_DIR)/, $(HEADERS_FILES))
SRCS:=$(addprefix $(SRC_DIR)/, $(SRCS_FILES))
OBJ=$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
