#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints n elements of an integer array
 * @a: Array of integers
 * @n: Number of elements to print
 *
 * Description: Numbers are separated by a comma and space.
 * Only the first n elements are printed, in order.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
	if (i != n - 1)
	{
	printf(", ");
	}
	}
	printf("\n");
}
