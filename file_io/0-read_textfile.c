#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read a .txt file
 * @filename: name of file to read
 * @letters: number of letters it should read & print
 *
 * Return: number of letters it could read & print, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, check, count;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	count = read(fd, buf, letters);

	check = write(STDOUT_FILENO, buf, count);

	if (check != count)
		count = 0;
	close(fd);
	free(buf);

	return (count);
}
