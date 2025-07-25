#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to print between numbers.
 * @n: The number of integers passed to the function.
 *
 * Description: If separator is NULL, it is not printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
unsigned int i;

va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
	printf("%d", va_arg(args, int));

if (separator != NULL && i < n - 1)
{
	printf("%s", separator);
}
}
printf("\n");
va_end(args);
}

