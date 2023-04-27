#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - function that adds the  new node of list_t.
 *
 * @head: is the head of the linked list.
 * @str: is the string to store.
 *
 * Return: to the address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_add, *pt;
	size_t w_char;

	n_add = malloc(sizeof(list_t));
	if (n_add == NULL)
	{
		return (NULL);
	}

	n_add->str = strdup(str);

	for (w_char = 0; str[w_char]; w_char++)
		;

	n_add->len = w_char;
	n_add->next = NULL;
	pt = *head;

	if (pt == NULL)
	{
		*head = n_add;
	}
	else
	{
		while (pt->next != NULL)
			pt = pt->next;
		pt->next = n_add;
	}

	return (*head);
}

