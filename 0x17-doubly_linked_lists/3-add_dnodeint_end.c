#include "lists.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - s the function add element
 *
 * @head:is the list
 * @n:element in list
 *
 * Return: is the new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *start;

	start = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->next = NULL;
		new->n = n;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (start->next)
	{
		start = start->next;
	}
	start->next = new;
	new->prev = start;
	new->next = NULL;
	new->n = n;
	return (new);
}
