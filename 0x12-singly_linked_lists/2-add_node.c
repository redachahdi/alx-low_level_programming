#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node - that adds the new node at the beginning.
 *
 * @head: is the head of the linked list.
 * @str: is the string to the store in the list.
 *
 * Return: is the address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_add;
	size_t w_char;

	n_add = malloc(sizeof(list_t));
	if (n_add == NULL)
		return (NULL);

	n_add->str = strdup(str);

	for (w_char = 0; str[w_char]; w_char++)
		;

	n_add->len = w_char;
	n_add->next = *head;
	*head = n_add;

	return (*head);
}
