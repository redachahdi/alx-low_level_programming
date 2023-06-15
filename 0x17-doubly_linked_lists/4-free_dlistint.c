#include "lists.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - s the function free a list
 *
 * @head:is the list
 *
 * Return:is the void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *start, *check;

	start = head;
	while (start != NULL)
	{
		check = start->next;
		free(start);
		start = check;
	}
}
