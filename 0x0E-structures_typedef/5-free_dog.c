#include "dog.h"
#include <main.h>

/**
 * free_dog - a function that frees dogs.
 * @d: struct dog to be freed.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
