#include "main.h"
#include <stdio.h>

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area
 * @b: The byte to fill the memory with
 * @n: The number of bytes to fill
 *
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
