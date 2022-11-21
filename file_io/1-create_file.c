#include "main.h"

/**
 * create_file - create a file with rw---- permissions
 * @filename: name of file
 * @text_content: text to be input into file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 00600);

	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i]; i++)
		continue;

	write(fd, text_content, i + 1);

	return (1);
}
