#include "main.h"
#include <stdlib.h>
/**
 * _strdup - the returns of pointer to new allocatin in the memory.
 *
 * @str: is the string.
 *
 * Return: is the array's pointer of the chars.
 */
char *_strdup(char *str)
{
	char *down;
	unsigned int a, b;

	if (str == NULL)
	{
		return (NULL);
	}

	for (a = 0; str[a] != '\0'; a++)
		;

	down = (char *)malloc(sizeof(char) * (a + 1));

	if (down == NULL)
	{
		return (NULL);
	}
	for (b = 0; b <= a; b++)
		down[b] = str[b];

	return (down);
}

