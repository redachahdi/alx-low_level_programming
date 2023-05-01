#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * free_listint2 - function that prints the free list.
 *
 * @head:is the pointer to list.
 *
 * Return: no return void.
 */
void free_listint2(listint_t **head)
{
	listint_t *al;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		al = *head;
		*head = (*head)->next;
		free(al);
	}
	head = NULL;
}
