#include <stdio.h>
#include "dog.h"
#include "main.h"


/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 *
 * Description: This function assigns values to the fields of
 * a struct dog. It assumes that the struct dog has already been defined.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;

	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
