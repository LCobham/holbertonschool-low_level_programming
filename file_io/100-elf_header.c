#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - builds an executable to display ELF header
 * @argc: unmber of args passed
 * @argv: array os strings (each str is an arg)
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	char *ELF_file;

	if (argc != 2)
	{
		printf("Usage: elf_header elf_filename\n");
		exit(97);
	}
	ELF_file = argv[1];
	printf("This is the file to print header of %s\n", ELF_file);

	return (0);
}
