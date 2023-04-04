#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - the prints the sum of the two 
 * diagonals of a square matrix of  the integers
 * @a: the input pointer.
 * @size: the size of the matrix
 * Return: no return is 0.
 */
void print_diagsums(int *a, int size)
{
	int i, sum_1 = 0, sum_2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum_1 += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum_2 += *(a + i);
	}
	printf("%d, %d\n", sum_1, sum_2);
}
