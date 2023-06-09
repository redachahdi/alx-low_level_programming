#include "main.h"
/**
 * _strchr -  is the locates a character in a string,
 * @s:  is the string.
 * @c: that means character.
 * Return:  is the pointer to the first occurrence of the character c.
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
