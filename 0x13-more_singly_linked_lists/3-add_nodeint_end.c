#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_nodeint_end - function thad add  at the end of the list.
 *
 *@head: is the pointer.
 *@n: is the integer elment .
 *
 * Return: is the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_add, *begin;

	begin = *head;
	n_add = malloc(sizeof(listint_t));
	if (n_add == NULL)
	{
		return (NULL);
	}
	n_add->n = n;
	n_add->next = NULL;
	if (*head == NULL)
	{
		*head = n_add;
		return (n_add);
	}
	while (begin->next)
	{
		begin = begin->next;
	}

	begin->next = n_add;
	return (n_add);
}
