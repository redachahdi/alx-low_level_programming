#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - function that checks the endianes
 *
 * Return: 0 success (big) , 1 (little)
 */
int get_endianness(void)
{
	unsigned int h;
	char *v;

	h = 1;
	v = (char *) &h;

	return ((int)*v);
}
