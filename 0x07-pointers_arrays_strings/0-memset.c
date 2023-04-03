#include "main.h"
/**
 * _memset - is a fille memory includes constant byte,
 * @s : is the memory area.
 * @b : the byte constant.
 * @n : bytes of the memory area pointed to by s.
 * return: the pointer to dest .
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
