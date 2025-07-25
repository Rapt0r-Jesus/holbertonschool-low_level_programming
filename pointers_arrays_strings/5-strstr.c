#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 * @haystack: The main string to search in
 * @needle: The substring to search for
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; (haystack[i]); i++)
	{
		for (j = 0; (needle[j]); j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}

return (0);
}
