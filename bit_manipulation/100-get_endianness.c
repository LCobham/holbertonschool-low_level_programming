#include "main.h"
#include <stdint.h>

/**
 * get_endianness - check endianness
 *
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
	int16_t i = 1;
	int8_t *p = (int8_t *) &i;

	return (*p & 1);
}
