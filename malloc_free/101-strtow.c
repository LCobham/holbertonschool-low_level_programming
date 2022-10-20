#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: pointer to array of strings
 */

char **strtow(char *str)
{
	int i, j, m, wc;
	char **p;

	if (strlen(str) == 0)
		return (NULL);
	for (i = 0, wc = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i + 1] == ' ')
			i++;
		else if ((str[i] > 32 && str[i] < 127) && (i == 0 || str[i - 1] == ' '))
			wc++;
	}
	if (wc == 0)
		return (NULL);
	p = malloc((wc + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	p[wc] = NULL;
	for (i = 0, m = 0; i < wc && str[m] != '\0'; m++)
	{
		if (str[m] == ' ' && str[m + 1] == ' ')
			continue;
		else if ((str[m] > 32 && str[m] < 127) && (m == 0 || str[m - 1] == ' '))
		{
			for (j = 0; str[m + j] != ' ' && str[m + j] != '\0'; j++)
				continue;
			p[i] = malloc(j + 1);
			if (p[i] == NULL)
			{
				for (m = 0; m < i; m++)
					free(p[m]);
				free(p);
				return (NULL);
			}
			strncpy(p[i], &str[m], j);
			p[i][j] = '\0';
			i++;
		}
	}
	return (p);
}
