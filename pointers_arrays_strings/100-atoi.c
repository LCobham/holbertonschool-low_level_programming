#include "main.h"

int power_of(int a, int b);
int _strcmp(char *s1, char *s2);

/**
 * _atoi - converts a number stored as a string to int
 * @s: address to string
 *
 * Return: int (number in str as int)
 */

int _atoi(char *s)
{
	int i, digits = 0, result = 0, semicolon = 0;

	if (_strcmp(s, "-2147483648") == 0)
		return(-2147483648);
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


/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 if equal, not zero if different
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] - s2[i] == 0)
			continue;
		else
			return (s1[i] - s2[i]);
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		if (s2[i] - s1[i] == 0)
			continue;
		else
			return (s2[i] - s1[i]);
	}
	return (0);


}
