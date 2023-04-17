#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - is the fonction of frees dogs.
 * @d: is the pointer of the struct dog.
 *
 * Return: with no return.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
