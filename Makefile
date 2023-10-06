SRCS=ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_puts_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
OBJ=$(SRCS:.c=.o)
BONUS=lst1_bonus.c lst2_bonus.c
BONUS_OBJ=$(OBJ) $(BONUS:.c=.o)
HEADER=libft.h
CC=cc
NAME=libft.a

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus: $(BONUS_OBJ) $(HEADER)
	ar -rc $(NAME) $(BONUS_OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) -c $< -o $@ -Wall -Wextra -Werror

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: clean all

.PHONY: all bonus clean fclean re
