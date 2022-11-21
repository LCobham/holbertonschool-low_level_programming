#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define BUF_SIZE 1024

/**
 * main - copy the content of a file into another
 * @argc: number or arguments passed
 * @argv: vector of strings, each str is an argument
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int fd_src, fd_dest, count, i, ar[2];
	char *buf = NULL;
	/*mode_t file_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;*/

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_src = open(argv[1], O_RDONLY);
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_dest = open(argv[2], O_RDWR | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	buf = malloc(BUF_SIZE);
	for (i = 0, count = BUF_SIZE; count == BUF_SIZE; i++)
	{
		count = read(fd_src, buf + (i * BUF_SIZE), BUF_SIZE);
		write(fd_dest, buf, count);
	}
	free(buf);
	ar[0] = fd_src, ar[1] = fd_dest;
	for (i = 0; i < 2; i++)
	{
		if (close(ar[i]) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src);
			exit(100);
		}
	}
	return (0);
}
