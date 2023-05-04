#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - function thst returns the number the bits.
 *
 * @n : is the unsigned long int.
 * @m : is the unsigned long int.
 
 * Return: is the number of the bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit;
	int k = 0;

	bit = n ^ m;
	while (bit >= 1)
	{
		if ((bit & 1) == 1)
			k++;
		bit >>= 1;
	}
	return (k);
}
