#include "lists.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * dlistint_len - is the function Return list
 *
 * @h: is the  struct list
 *
 * Return: is the list len
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	int i = 0;

	for (i = 0; h; i++)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
