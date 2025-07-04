#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: The string to reverse and print
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}
