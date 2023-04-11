#include "main.h"
#include <stdlib.h>

/**
 * str_concat - is include the two strings.
 *
 * @s1: is the first string.
 * @s2: is the second string.
 *
 * Return: is the array's pointer of the chars.
 */
char *str_concat(char *s1, char *s2)
{
	char *down;
	unsigned int a, b, c, finish;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	down = malloc(sizeof(char) * (a + b + 1));

	if (down == NULL)
	{
		free(down);
		return (NULL);
	}

	for (c = 0; c < a; c++)
		down[c] = s1[c];

	finish = b;
	for (b = 0; b <= finish; c++, b++)
		down[c] = s2[b];

	return (down);
}
