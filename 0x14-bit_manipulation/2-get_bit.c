#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - function that returns the value of the bit index.
 *
 * @n: is the unsigned long int.
 * @index: is the index .
 *
 * Return: is the bit value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int k;

	if (n == 0 && index < 64)
	{
		return (0);
	}

	for (k = 0; k <= 63; n >>= 1, k++)
	{
		if (index == k)
		{
			return (n & 1);
		}
	}

	return (-1);
}
