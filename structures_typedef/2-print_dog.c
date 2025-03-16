#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to struct dog to print
 *
 * Description: Prints the details of a struct dog, replacing NULL values
 *              with "(nil)". If d is NULL, prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
