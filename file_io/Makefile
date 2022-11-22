CC = gcc
CFLAGS = -Wall -pedantic -Werror -Wextra -std=gnu89
NAME = cp
SRC = 3-cp.c

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^


run: 
	./cp textfile_2 textfile_2_copy
	echo $$?
	ls -l textfile_2_copy
