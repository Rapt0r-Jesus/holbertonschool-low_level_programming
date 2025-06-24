#include <stdio.h>
#include "main.h"

/**
 * print_square - Prints a square using the '#' character
 * @size: The size of the square
 *
 * Description: Prints a square of '#' characters with
 * a size of 'size' x 'size'. If size is 0 or less,
 * only a new line is printed.
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
