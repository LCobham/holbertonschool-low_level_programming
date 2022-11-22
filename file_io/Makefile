CC = gcc
CFLAGS = -Wall -pedantic -Werror -Wextra -std=gnu89
NAME = cp
SRC = 3-cp.c

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^


run: 
	./cp test test_cpy
	ls -l test
	ls -l test_cpy
	cat test_cpy
