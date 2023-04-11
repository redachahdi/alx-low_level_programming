#include "main.h"
#include <stdlib.h>
/**
 * create_array - should create the array of the chars.
 *
 * @size: array's size.
 * @c: that storage the char.
 *
 * Return: is the array's pointers of chars
 */
char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int b;

	if (size == 0)
	{
		return (NULL);
	}
	A = malloc(sizeof(c) * size);
	if (A == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < size; b++)
		A[b] = c;

	return (A);
}
