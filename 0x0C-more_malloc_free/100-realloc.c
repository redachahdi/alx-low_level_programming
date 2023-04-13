#include "main.h"
#include <stdlib.h>
/**
 * _realloc - is the reallocate of the memory block.
 *
 * @ptr: is the pointer of the earlier allocated memory.
 *
 * @old_size: the allocated space of ptr  the size in bytes.
 * @new_size: the memory block new size, in bytes.
 *
 * Return: to the ptr.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
