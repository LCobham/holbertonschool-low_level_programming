#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum number of coins to give a certain ammount of change
 * @argc: number of args passed
 * @argv: array of strings
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int res, remaining, i;
	int coins[5] = {25, 10, 5, 2, 1};


	if (argc != 2 || atoi(argv[1]) < 0)
	{
		printf("Error\n");
		return (1);
	}
	remaining = atoi(argv[1]);
	res = 0;

	for (i = 0; i < 5; i++)
	{
		res += remaining / coins[i];
		remaining %= coins[i];
	}
	printf("%d\n", res);
	return (0);
}
