#include "main.h"
/**
 * _print_rev_recursion - start with reverse string and print it.
 *
 * @s: string
 * return: we have no return.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
