#include <stdio.h>

void print_hard_tort(void) __attribute__ ((constructor));
/**
 * print_hard_tort - function print before main function .
 *
 * Return: no return void
 */
void print_hard_tort(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
