#include "main.h"

/**
 * binary_to_uint - convert a number in binary, passed as string to uint
 * @b: string containing binary
 *
 * Return: the converted number, or 0 if b is NULL, or there are chars != {0,1}
 */

unsigned int binary_to_uint(const char *b)
{
	int len, i, res;

	if (b == NULL)
		return (0);

	for (len  = 0; b[len]; len++)
		continue;

	for (res = 0, i = 0, len--; len >= 0; len--, i++)
	{
		switch (b[len])
		{
			case '1':
				res += (1 << i);
				break;

			case '0':
				break;

			default:
				return (0);
		}
	}

	return (res);
}
