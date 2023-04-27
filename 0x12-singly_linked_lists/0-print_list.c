#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_list - fonction that prints all the elements of the list_t.
 *
 * @h: is the pointer
 * Return: is the number of the nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;
	int k;
	const list_t *b = h;

	for (k = 0; b; k++)
	{
		if (b->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", b->len, b->str);
	b = b->next;
	len++;
	}
return (len);
}
