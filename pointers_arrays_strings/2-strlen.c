#include "main.h"
#include <stdio.h>

/**
 * _strlen - Retourne la longueur d'une chaîne de caractères
 * @s: Pointeur vers la chaîne de caractères
 *
 * Cette fonction parcourt la chaîne jusqu'au caractère nul '\0'
 * et retourne le nombre de caractères dans la chaîne.
 *
 * Return: Longueur de la chaîne (entier)
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
