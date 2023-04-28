#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_listint - function that print all element in the list
 *
 * @h: is the pointer in a list
 *
 * Return: is the size of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t yt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		yt++;
		h = h->next;
	}
	return (yt);
}
