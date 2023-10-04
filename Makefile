SRCS=$(wildcard ./*.c)
OBJ=$(SRCS:.c=.o)
HEADER=libft.h
CC=cc
NAME=libft.a


all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

god: $(SRCS) $(HEADER)
	clang -Wall -Wextra -Werror *.c

%.o: %.c
	$(CC) -c $< -o $@ -Wall -Wextra -Werror

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: clean all
