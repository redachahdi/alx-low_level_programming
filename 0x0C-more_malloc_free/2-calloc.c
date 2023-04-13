#include "main.h"
#include <stdlib.h>
/**
 * _calloc - is the allocates memoryof the array.
 *
 * @nmemb: is the element'numbers.
 * @size: is the size of bytes.
 *
 * Return: is the pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int k;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	a = malloc(nmemb * size);

	if (a == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < (nmemb * size); k++)
		a[k] = 0;

	return (a);
}
