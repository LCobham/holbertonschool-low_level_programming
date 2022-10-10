#include "main.h"

int power_of(int a, int b);

/**
 * _atoi - converts a number stored as a string to int
 * @s: address to string
 *
 * Return: int (number in str as int)
 */

int _atoi(char *s)
{
	int i, digits = 0, result = 0, semicolon = 0;

	for (i = 0; s[i] != '\0'; i++)
		continue;

	for (; i >= 0; i--)
	{
		if (s[i - 1] >= 48 && s[i - 1] < 58)
		{
			if (semicolon == 1)
			{
				result = 0;
				digits = 0;
			}
			result -= power_of(10, digits) * (s[i - 1] - 48);
			digits++;
			semicolon = 0;
		}
		if (s[i - 1] == 45)
			result *= -1;

		if (s[i - 1] == 59)
			semicolon = 1;
	}
	return (-1 * result);
}

/**
 *power_of - compute a^b
 *@a: base
 *@b: exponent
 *
 *Return: a^b. Will return 1 on 0^0
 */

int power_of(int a, int b)
{
	int result = 1;

	if (b == 0)
		return (1);
	if (b < 0)
	{
		b *= -1;
		for (; b > 0; b--)
		{
			result /= a;
		}
		return (result);
	}
	else
	{
		for (; b > 0; b--)
		{
			result *= a;
		}
		return (result);
	}

}
