#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * list_len - function that number of elements in a linked list_t list.
 *
 * @h: is the pointer in singly linked list
 * Return: is the number of element in the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	int k;
	const list_t *b = h;

	for (k = 0; b; k++)
	{
	b = b->next;
	len++;
	}
return (len);
}
