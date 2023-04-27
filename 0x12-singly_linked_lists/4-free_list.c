#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * free_list - function that Frees the list_t list.
 *
 * @head: is the pointer to the list_t
 * Return: to the void
 */
void free_list(list_t *head)
{
	list_t *vrf, *b;

b = head;
while (b != NULL)
{
	vrf = b->next;
	free(b->str);
	free(b);
	b = vrf;
}

}
