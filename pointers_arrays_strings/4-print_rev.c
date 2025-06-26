#include "main.h"
#include <stdio.h>

/**
 * _strlen - Retourne la longueur d'une chaîne de caractères
 * @s: Pointeur vers la chaîne
 *
 * Return: Longueur de la chaîne (int)
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}

	_putchar('\n');
}
