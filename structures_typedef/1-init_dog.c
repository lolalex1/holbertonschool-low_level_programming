#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to struct dog to initialize
 * @name: Pointer to dog's name
 * @age: Dog's age
 * @owner: Pointer to dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
        return;

    d->name = name;
    d->age = age;
    d->owner = owner;
}
