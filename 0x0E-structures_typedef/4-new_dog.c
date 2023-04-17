#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - is the fonction creates the new dog.
 *
 * @name: is the name of the dog.
 * @age: is the age of the dog.
 * @owner: is the owner of the dog.
 *
 * Return:  to the struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int k, issm, b_own;

	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL || !(name) || !(owner))
	{
		free(new_dog);
		return (NULL);
	}

	for (issm = 0; name[issm]; issm++)
		;

	for (b_own = 0; owner[b_own]; b_own++)
		;

	new_dog->name = malloc(issm + 1);
	new_dog->owner = malloc(b_own + 1);

	if (!(new_dog->name) || !(new_dog->owner))
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (k = 0; k < issm; k++)
		new_dog->name[k] = name[k];
	new_dog->name[k] = '\0';

	new_dog->age = age;

	for (k = 0; k < b_own; k++)
		new_dog->owner[k] = owner[k];
	new_dog->owner[k] = '\0';

	return (new_dog);
}
