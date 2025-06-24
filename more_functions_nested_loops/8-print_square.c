#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: The number of times the character '\' should be printed
 *
 * Description: For n > 0, prints '\' n times with increasing indentation.
 * If n is 0 or less, only a newline is printed.
 */

void print_square(int size)
{
	int i, j;

	if (size <= 1)
		_putchar('\n');

	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
