#include "main.h"

/**
 * argstostr - concatenates the arguents of a program
 * @ac: n of arguments
 * @av: array of strings
 *
 * Return: pointer to str
 */

char *argstostr(int ac, char **av)
{
	int i, j, n_char, count;
	char *p;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0, n_char = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, n_char++)
			continue;
	}

	p = malloc(n_char + ac + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0, count = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, count++)
			p[count] = av[i][j];
		p[count] = '\n';
		count++;
	}
	p[count] = '\0';

	return (p);
}
