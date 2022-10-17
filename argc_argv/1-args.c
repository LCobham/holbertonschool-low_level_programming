#include <stdio.h>

/**
 * main - prints the n of args passed to main
 * @argc: num of args passed in the command line
 * @argv: array of strings
 *
 * Return: 0 on success
 */

int main(int __attribute__ ((unused)) argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
