#include <stdio.h>
#include "dog.h"

/**
 * struct dog - a structure representing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: A struct to store basic information about a dog.
 */

struct dog {
    char *name;
    float age;
    char *owner;
};
