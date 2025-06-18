#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char num;

	for (num = 0; num <= 15; num++)
	{
	putchar("%x", num);
	}
	putchar("\n");
	return (0);
}
