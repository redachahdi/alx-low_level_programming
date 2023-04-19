#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - is fonction that print name
 *
 * @name : is the string
 * @f: is the function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
