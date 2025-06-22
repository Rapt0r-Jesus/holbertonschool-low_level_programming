#include "main.h"
#include <stdio.h>

int print_last_digit(int x)

{
	int a;

	a = abs(x % 10);
	_putchar(a + '0');
	return (a);
}
