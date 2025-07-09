#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings, including up to n bytes of s2
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes to include from s2
 *
 * Return: Pointer to newly allocated concatenated string,
 *         or NULL if allocation fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
unsigned int lenght1 = 0;
unsigned int lenght2 = 0;
char *buffer;

if (s1 == NULL)
{
	s1 = "";
}
if (s2 == NULL)
{
	s2 = "";
}
	while (s1[lenght1] != '\0')
	lenght1++;

	while (s2[lenght2] != '\0')
	lenght2++;

	if (n >= lenght2)
	n = lenght2;

	buffer = malloc(lenght1 + n + 1);
	if (buffer == NULL)
	return (NULL);

	for (i = 0; i < lenght1; i++)
	buffer[i] = s1[i];

	for (j = 0; j < n; j++)
	buffer[lenght1 + j] = s2[j];

	buffer[lenght1 + n] = '\0';

	return (buffer);
	}
