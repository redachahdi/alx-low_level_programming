#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - is the allocate of the memory.
 * @b: is the bytes'amount.
 *
 * Return: is the pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
