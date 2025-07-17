#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>


void print_strings(const char *separator, const unsigned int n, ...)

{
unsigned int i;

va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
        printf("%s", va_arg(args, char *));
if (args == NULL)
{
	printf("nil");
}
if (separator != NULL && i < n - 1)
{
        printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
