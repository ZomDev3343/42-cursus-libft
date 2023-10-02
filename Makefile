all: libft.a

libft.a: *.c libft.h
	cc -Wall -Wextra -Werror -c *.c
	ar -rc libft.a *.o
	ranlib libft.a

god: *.c libft.h
	clang -Wall -Wextra -Werror *.c

clean:
	rm *.o

fclean: clean
	rm libft.a

re: clean all
