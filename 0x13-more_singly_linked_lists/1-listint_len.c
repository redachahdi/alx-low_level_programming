#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * listint_len - is the length of the list
 *
 * @h: is the pointer of element's list
 *
 * Return: is the size of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t lengh = 0;

	while (h)
	{
		lengh++;
		h = h->next;
	}

	return (lengh);
}
