#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* delete_nodeint_at_index - function that delete list'node .
*
* @head: is the pointer
* @index: is the index of the node.
*
* Return: Success is 1 or error -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *a;
	listint_t *rev;
	unsigned int k = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	rev = *head;

	if (index == 0)
	{
		*head = rev->next;
		free (rev);
		return (1);
	}

	while (k < index && rev->next)
	{
		a = rev;
		rev = rev->next;
		k++;
	}
	if (k < index)
	{
	return (-1);
	}

	a->next = rev->next;
	free(rev);

	return (1);
}
