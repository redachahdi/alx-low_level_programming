#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_nodeint - function that add the new node linked list .
 *
 * @head: is the head the list.
 * @n: nombre of the element.
 *
 * Return: is the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_add;

	n_add = malloc(sizeof(listint_t));

	if (n_add == NULL)
	{
		return (NULL);
	}

	n_add->n = n;
	n_add->next = *head;
	*head = n_add;

	return (*head);
}
