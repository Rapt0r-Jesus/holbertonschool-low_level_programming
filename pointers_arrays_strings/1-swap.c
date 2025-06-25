#include <stdio.h>
#include "main.h"

/**
 * swap_int - Échange les valeurs de deux entiers
 * @a: Pointeur vers le premier entier
 * @b: Pointeur vers le deuxième entier
 *
 * Cette fonction échange les valeurs de deux entiers
 * en utilisant une variable temporaire.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
