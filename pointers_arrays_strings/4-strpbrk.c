#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The set of bytes to search for
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; (s[i]); i++)
	{
		for (j = 0; (accept[j]); j++)
		{
			if ((s[i]) == (accept[j]))
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
