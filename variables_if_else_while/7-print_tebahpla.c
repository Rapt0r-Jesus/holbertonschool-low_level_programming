#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low  = 'z';

	while (low >= 'a')
	{
	putchar(low);
	low--;
	}

	putchar('\n');
	return (0);
}

