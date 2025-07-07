#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string to a newly allocated memory space
 * @str: The input string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL on failure
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, lenght = 0;

	if (str == NULL)
		return (NULL);

	while (str[lenght] != '\0')
		lenght++;

	dup = malloc(sizeof(char) * (lenght + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < lenght; i++)
		dup[i] = str[i];

	dup[lenght] = '\0';

	return (dup);
}
