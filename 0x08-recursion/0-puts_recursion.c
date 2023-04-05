#include "main.h"
/**
 * _puts_recursion - in thr begining print the string follow the new line.
 *
 * @s: is the string
 * return: we have no return.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
