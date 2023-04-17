#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs
 * @d: pointer to a dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
