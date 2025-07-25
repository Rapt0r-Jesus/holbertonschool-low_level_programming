#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: List of types of arguments.
 * Description:
 * c: char
 * i: integer
 * f: float
 * s: string (if NULL, print (nil))
 * Ignores any other characters.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str, *sep = "";

va_start(args, format);

while (format && format[i])
{
	switch (format[i])
	{
	case 'c':
		printf("%s%c", sep, va_arg(args, int));
		break;
	case 'i':
		printf("%s%d", sep, va_arg(args, int));
		break;
	case 'f':
		printf("%s%f", sep, va_arg(args, double));
		break;
	case 's':
		str = va_arg(args, char *);
		if (!str)
			str = "(nil)";
		printf("%s%s", sep, str);
		break;
	default:
		i++;
		continue;
	}
sep = ", ";
i++;
	}

printf("\n");
va_end(args);
}
