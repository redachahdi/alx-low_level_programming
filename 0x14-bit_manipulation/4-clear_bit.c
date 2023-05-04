#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit - function that sets the value of the bit.
 *
 * @n: is the pointer of the unsigned long int.
 * @index: is the index.
 *
 * Return: 1 is success, -1 is not.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int h;

	if (index > 63)
	{
		return (-1);
	}

	h = 1 << index;

	if (*n & h)
	{
		*n ^= h;
	}

	return (1);
}
