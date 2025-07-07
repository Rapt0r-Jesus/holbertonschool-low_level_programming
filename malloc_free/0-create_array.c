#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes with specific char
 * @size: The size of the array to create
 * @c: The character to initialize the array with
 * Return: Pointer to the array, or NULL if 0 or memory allocation fails
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;

char *array = malloc(size);
if (array == NULL)
{
	return (NULL);
}
if (size == 0)
{
	return (NULL);
}

for (i = 0; i < size; i++)
{
	array[i] = c;
}
return (array);
}
