#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nbr;

	for (nbr = 0; nbr < 10; nbr++)
	{
	putchar(nbr + '0');
	}

	putchar('\n');
	return (0);
}
