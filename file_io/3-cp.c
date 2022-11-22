#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define BUF_SIZE 1024
int close_files(int f1, int f2);

/**
 * main - copy the content of a file into another
 * @argc: number or arguments passed
 * @argv: vector of strings, each str is an argument
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int fd_src, fd_dest, count, write_check;
	char *buf = NULL;
	mode_t file_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_src = open(argv[1], O_RDWR);
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_dest = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, file_mode);
	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	buf = malloc(BUF_SIZE);
	if (buf == NULL)
	{
		close_files(fd_src, fd_dest);
		exit(101);
	}

	for (count = BUF_SIZE; count == BUF_SIZE;)
	{
		count = read(fd_src, buf, BUF_SIZE);
		if (count == -1)
		{
			dprintf(STDERR_FILENO, "read() returned error\n");
			exit(101);
		}
		write_check = write(fd_dest, buf, count);
		if (count != write_check)
		{
			dprintf(STDERR_FILENO, "write() didn't write expected n of bytes\n");
			exit(101);
		}
	}
	free(buf);
	close_files(fd_src, fd_dest);
	return (0);
}


/**
 * close_files - close 2 opened files w error checking
 * @f1: file 1
 * @f2: file 2
 *
 * Return: 0 on success
 */

int close_files(int f1, int f2)
{
	int check;

	check = close(f1);
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
		exit(100);
	}

	check = close(f2);
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
		exit(100);
	}
	return (0);
}

