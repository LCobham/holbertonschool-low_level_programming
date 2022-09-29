#include <unistd.h>

int _putchar(char c);

/**
 * main - prints "_putchar"
 *
 * Return: 0 if success
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');

	_putchar('\n');
	return (0);
}

/**
 * _putchar - prints character
 * @c: char thatgets printed
 *
 * Return: ascii num of c?
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
