#include <stdlib.h>
#include "dog.h"
#include "main.h"

int str_len(char *s);
char *str_copy(char *s);

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d = malloc(sizeof(dog_t));

    if (!d)
        return NULL;

    d->name = str_copy(name);
    if (!d->name)
        return NULL;

    d->owner = str_copy(owner);
    if (!d->owner)
        return NULL;

    d->age = age;
    return d;
}

