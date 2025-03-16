#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_dog - Frees a dog structure
 * @d: Pointer to dog_t struct to be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
