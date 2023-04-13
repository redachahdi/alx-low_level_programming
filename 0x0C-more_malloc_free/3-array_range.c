#include "main.h"
#include <stdlib.h>
/**
 * array_range - that creates the integers'array.
 *
 * @min: is the minimum values.
 * @max: is the maximum values.
 *
 * Return: the new created array'pointer.
 */
int *array_range(int min, int max)
{
	int *rang;
	int k;

	if (min > max)
		return (NULL);

	rang = malloc(sizeof(*rang) * ((max - min) + 1));

	if (rang == NULL)
		return (NULL);

	for (k = 0; min <= max; k++, min++)
		rang[k] = min;

	return (rang);
}
