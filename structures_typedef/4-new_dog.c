#include <stdlib.h>
#include "dog.h"

int _str_len(char *str)
{
    int i = 0;
    while (str && str[i])
        i++;
    return i;
}

char *_str_copy(char *src)
{
    int i, len;
    char *dest;

    len = _str_len(src);
    dest = malloc(len + 1);
    if (dest == NULL)
        return NULL;

    for (i = 0; i < len; i++)
        dest[i] = src[i];
    dest[i] = '\0';

    return dest;
}

/**
 * new_dog - Creates a new dog with a copy of name and owner
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner's name
 *
 * Return: Pointer to new dog_t, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;

    d = malloc(sizeof(dog_t));
    if (d == NULL)
        return NULL;

    d->name = _str_copy(name);
    if (d->name == NULL)
    {
        free(d);
        return NULL;
    }

    d->owner = _str_copy(owner);
    if (d->owner == NULL)
    {
        free(d->name);
        free(d);
        return NULL;
    }

    d->age = age;

    return d;
}
