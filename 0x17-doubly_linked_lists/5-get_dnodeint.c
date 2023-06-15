#include "lists.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - is functuin get node by index
 *
 * @head: is the list
 * @index: is the index of element
 *
 * Return: is the element by index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c;

	for (c = 0; c < index && head->next; c++)
	{
		head = head->next;
	}
	if (c < index)
		return (NULL);
	return (head);
}
