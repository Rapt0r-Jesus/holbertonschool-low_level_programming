#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Copies memory area
 * @dest: Pointer to the destination array
 * @src: Pointer to the source of data to be copied
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
return (dest);
}
