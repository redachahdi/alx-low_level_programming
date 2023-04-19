#include "function_pointers.h"
/**
 * int_index - to search for the integer.
 *
 * @array: is input integer array.
 * @size: is the size of the array.
 * @cmp: pointer to the function.
 *
 * Return: is the index of the integer searched.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (k = 0; k < size; k++)
			if (cmp(array[k]))
				return (k);
	}

	return (-1);
}
