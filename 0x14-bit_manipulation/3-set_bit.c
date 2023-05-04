#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - function that set the value the bit.
 *
 * @n: is the pointer.
 * @index: is the index.
 *
 * Return: 1 is success, -1 is not.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int h;

	if (index > 63)
	{
		return (-1);
	}

	h = 1 << index;
	*n = (*n | h);

	return (1);
}
