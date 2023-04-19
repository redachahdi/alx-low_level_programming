#include "function_pointers.h"
/**
 * array_iterator - to excute an array fonction 
 *
 * @array: is ths array
 * @size:  is the size_t
 * @action:is the function to excute
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
