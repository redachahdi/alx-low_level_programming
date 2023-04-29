#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * free_listint - function the print the free list.
 *
 * @head: is the pointer.
 *
 * Return: no return void
 */
void free_listint(listint_t *head)
{
	listint_t *vrf, *b;

b = head;
while (b != NULL)
{
	vrf = b->next;
	free(b);
	b = vrf;
}
}
