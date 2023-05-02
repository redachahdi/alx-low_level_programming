#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * reverse_listint -  function that reverse the list.
 *
 * @head: is the pointer of list.
 *
 * Return: to the pointer.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *next;

	if (*head == NULL || head == NULL)
	{
		return (NULL);
	}
	if ((*head)->next == NULL)
	{
		return (*head);
	}
	prev = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
