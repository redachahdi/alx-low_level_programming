#include "main.h"
/**
 * _memset - is the fills memory with a constant byte,
 * @s: is the memory area.
 * @b: is the constant byte.
 * @n: is the bytes filled.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
