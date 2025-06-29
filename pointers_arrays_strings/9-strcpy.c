#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies a string (including null terminator)
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0'; /* Copy the null terminator */
	return (dest);
}
