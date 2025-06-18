#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints whether a random number is greater than 5, equal to 0,
* or less than 6 and not 0.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("The last digit of the number %d is %d and is greater than 5\n", x, y);
	else if (n == 0)
		printf("The last digit of the number %d is %d and is 0\n", n);
	else
		printf("The last digit of the number %d is %d and is less than 6 and not 0\n", n);
	return (0);
}
