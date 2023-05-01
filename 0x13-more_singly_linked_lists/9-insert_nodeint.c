#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * insert_nodeint_at_index - function that prints the insertion the new node.
 * @head: is the pointer.
 * @index: is the index.
 * @n: the number's given
 *
 * Return: the pointer to the new add .
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *n_add, *a;
	unsigned int k = 0;

	n_add = malloc(sizeof(listint_t));
	if (!n_add)
		return (NULL);
	n_add->n = n;

	if (*head == NULL)
	{
		*head = n_add;
		n_add->next = NULL;
		return (n_add);
	}
	if (index == 0)
	{
		n_add->next = *head;
		*head = n_add;
		return (n_add);
	}

	a = *head;
	while (k < (index - 1) && a->next)
	{
		a = a->next;
		k++;
	}
	if (k < index - 1)
		return (NULL);

	n_add->next = a->next;
	a->next = n_add;

	return (n_add);
}
