#include "main.h"
/**
 * _memcpy - is the copies memory area,
 * @dest: is the  destination memory area.
 * @src: is the source memory area.
 * @n: is the bytes filled.
 * Return: is the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
