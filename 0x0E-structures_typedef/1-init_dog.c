#include "dog.h"
#include <stdio.h>

/**
 * init_dog - is the fonction ninitializes a variable of type struct dog.
 * @d:  is the struct dog.
 *
 * @name: is the name of the dog.
 * @age: is the age of the dog.
 * @owner: is the owner of the dog.
 *
 * Return: with no return.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
