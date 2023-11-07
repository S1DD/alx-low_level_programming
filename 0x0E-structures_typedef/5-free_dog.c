#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs
 * @d: The dog type to be freed
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
