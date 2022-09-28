#include <stdio.h>
/**
 * main - print the sizes of different data types
 *
 * Return: 0 if no error is present
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(__int64_t));
	return (0);
}
