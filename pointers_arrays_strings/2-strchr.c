#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string to search
 * @c: The character to locate
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)

		return (s);
			s++;
	}
	if (c == '\0')

		return (s);

	return (0);
}

