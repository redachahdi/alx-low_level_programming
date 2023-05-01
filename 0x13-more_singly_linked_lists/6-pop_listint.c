#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * pop_listint - function that delete the head.
 *
 *@head: is the pointer.
 *
 *Return: the data head
 */
int pop_listint(listint_t **head)
{
	listint_t *pl;
	int n;

	pl = *head;
	if (pl == NULL)
	{
		return (0);
	}
	*head = pl->next;
	n = pl->n;
	free(pl);
	return (n);
}
