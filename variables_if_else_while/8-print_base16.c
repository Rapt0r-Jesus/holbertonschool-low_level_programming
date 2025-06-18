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
	int num;
	char letter;

	for (num = 0; num <= 16; num++)
	{
	putchar (0 + num);
	}

	for (letter = 'a'; letter <= 'j'; letter++)
	{
	putchar (letter);
	}

	putchar ('\n');


	return (0);
}
