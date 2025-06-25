#include "main.h"
#include <stdio.h>

/**
 * _puts - Affiche une chaîne de caractères suivie d'une nouvelle ligne
 * @str: Pointeur vers la chaîne de caractères à afficher
 *
 * Cette fonction utilise puts pour afficher la chaîne
 * passée en paramètre, suivie d'un retour à la ligne.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
