
CC 	= 	gcc

LFLAGS 	= 	-I./includes

CFLAGS 	= 	-g -g -W -Wall -Werror -Wextra -pedantic

NAME 	=	brainfuck

SRC 	= 	main.c \
		my_putchar.c

all: build

build:
	$(CC) -o $(NAME) $(SRC) $(CFLAGS) $(LFLAGS)


clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
