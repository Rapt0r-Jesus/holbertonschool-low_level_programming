#include <stddef.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Calls a function to print a name
 * @name: The name to be printed
 * @f: A pointer to the function that takes a char * and returns void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
	f(name);
	}
}
