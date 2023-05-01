#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - function that print the return the node of link list.
 *
 * @head: ia the pointer.
 * @index: is the given index.
 *
 * Return: is the index or Null.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t wh;

	for (wh = 0; wh < index && head->next; wh++)
	{
		head = head->next;
	}
	if (wh < index)
	{
		return (NULL);
	}
	return (head);
}
