#include <unistd.h>

/**
 * main - prints "_putchar"
 *
 * Return: 0 if success
 */

int _putchar(char c);

int main(void)
{
	char *s = "_putchar";
	int i = 0;
	
	while (i < 8)
	{
		_putchar(*(s+i));
		i++;
	}

	_putchar('\n');
	return (0);
}


int _putchar(char c)
{
	return (write(1, &c, 1));
}
