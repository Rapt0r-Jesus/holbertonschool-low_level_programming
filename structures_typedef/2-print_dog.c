#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the contents of a struct dog
 * @d: pointer to struct dog to print
 *
 * Description: Prints each member of struct dog. If an element is NULL,
 * it prints (nil). If d is NULL, nothing is printed.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
