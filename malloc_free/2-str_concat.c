#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a newly allocated memory.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to the new concatenated string, or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
unsigned int i, j;
unsigned int lenght1 = 0;
unsigned int lenght2 = 0;
char *buffer;

if (s1 == NULL)
{
	return ("");
}
if (s2 == NULL)
{
	return ("");
}
	while (s1[lenght1] != '\0')
	lenght1++;

	while (s2[lenght2] != '\0')
	lenght2++;

	buffer = malloc(lenght1 + lenght2 + 1);
	if (buffer == NULL)
	return (NULL);

	for (i = 0; i < lenght1; i++)
	buffer[i] = s1[i];

	for (j = 0; j < lenght2; j++)
	buffer[lenght1 + j] = s2[j];

	buffer[lenght1 + lenght2] = '\0';

	return (buffer);
	}
