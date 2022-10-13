#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - gen a password
 *
 * Retrun: 0 on success
 */

int main(void)
{
	char password[11];

	password[0] = rand() % 57 + 71;
	password[1] = rand() % 77 + 32;
	password[2] = 'V';
	password[3] = rand() % 25 + 102;
	password[4] = rand() % 19 + 32;
	password[5] = rand() % 6 + 121;
	password[6] = rand() % 71 + 56;
	password[7] = rand() % 46 + 32;
	password[8] = rand() % 50 + 32;
	password[9] = '2';
	password[10] = '\0';

	printf("%s\n", password);
	return (0);
}
