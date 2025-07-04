#include <stdio.h>
#include "main.h"

/**
 * sqrt_helper - Helper function to find square root recursively
 * @n: Number to find the square root of
 * @num: Current guess for the square root
 *
 * Return: Natural square root of n, or -1 if none exists
 */

int sqrt_helper(int n, int num)
{
	if (num * num == n)
	{
	return (num);
	}
	if (num * num > n)
	{
	return (-1);
	}
	return (sqrt_helper(n, num + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to compute the square root of
 *
 * Return: The natural square root, or -1 if none exists
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0 || n == 1)
	{
	return (n);
	}
return (sqrt_helper(n, 0));
}







