#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * binary_to_uint - function that convert the  binary number to integer.
 *
 * @b: is the binary.
 *
 * Return: is the unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int add;
	int l_engh, bina_r;

	if (!b)
		return (0);

	add = 0;

	for (l_engh = 0; b[l_engh] != '\0'; l_engh++)
		;

	for (l_engh--, bina_r = 1; l_engh >= 0; l_engh--, bina_r *= 2)
	{
		if (b[l_engh] != '0' && b[l_engh] != '1')
		{
			return (0);
		}

		if (b[l_engh] & 1)
		{
			add += bina_r;
		}
	}

	return (add);
}
