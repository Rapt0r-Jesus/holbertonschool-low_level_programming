#include "main.h"
#include <stdio.h>

/**
 * rev_string - Inverse une chaîne de caractères
 * @s: Pointeur vers la chaîne à inverser
 *
 * Cette fonction inverse la chaîne donnée en place,
 * sans utiliser de mémoire supplémentaire.
 */
void rev_string(char *s)
{
	int start = 0;
	int end = 0;
	char temp;


	while (s[end] != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
