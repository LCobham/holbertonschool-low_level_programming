#include "main.h"

/**
 * _strstr - locate first ocurrance of substr in str
 * @haystack: str
 * @needle: substr
 *
 * Return: pointer to first occurrance or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, m;

        if (needle[0] == '\0')
                return (haystack);

        for (i = 0; needle[i] != '\0'; i++)
                continue;

        for (m = 0; haystack[m] != '\0'; m++)
        {
                if (haystack[m] == needle[0])
                {
                    for (j = 1; j < i; j++)
                    {
                        if (needle[j] == haystack[m + j])
                            return (&haystack[m]);
                    }
                }
        }
        return (NULL);	
}
