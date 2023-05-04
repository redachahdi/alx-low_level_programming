#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - function that print the binary.
 *
 * @n : is the unsigned int
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)

		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
