#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - is include  the two strings.
 *
 * @s1: is the first string.
 * @s2: is the second string.
 * @n: is the bytes'amount.
 *
 * Return: pointer to the allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *in;
	unsigned int a, b, add, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	if (n > b)
		n = b;

	add = a + n;

	in = malloc(add + 1);

	if (in == NULL)
		return (NULL);

	for (k = 0; k < add; k++)
		if (k < a)
			in[k] = s1[k];
		else
			in[k] = s2[k - a];

	in[k] = '\0';

	return (in);
}
