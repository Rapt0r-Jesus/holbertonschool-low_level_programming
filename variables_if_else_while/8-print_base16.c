#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char num;

	for (num = 0; num <= 16; num++)
	{
	putchar(num);
	}
	putchar('\n');
	return (0);
}
