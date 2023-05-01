#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * sum_listint - function that print sum of element list.
 *
 * @head: is the pointer.
 *
 * Return: return to the declaration.
 */
int sum_listint(listint_t *head)
{
	int g_sm = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head->next)
	{
		g_sm += head->n;
		head = head->next;
	}
	g_sm += head->n;
	return (g_sm);
}
