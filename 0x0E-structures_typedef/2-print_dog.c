#include "dog.h"
#include <stdio.h>

/**
 * print_dog - is a fonction thst prints a struct dog.
 *
 * @d:  is the struct dog.
 *
 * Return: whit no return.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
		{
			printf("Name: (nil)\n");
		}
		else
			printf("Name: %s\n", d->name);

		printf("Age: %.2f\n", d->age);

		if (!(d->owner))
		{
			printf("Owner: (nil)\n");
		}
		else
			printf("Owner: %s\n", d->owner);
	}
}

