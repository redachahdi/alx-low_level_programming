#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - to add the two numbers.
 *
 * @g: is the first number.
 * @k: is the second number.
 *
 * Return: to add.
 */
int op_add(int g, int k)
{
	return (g + k);
}

/**
 * op_sub - that subctracts the two numbers.
 *
 * @g: is the first number.
 * @k: is the second number.
 *
 * Return: to the difference.
 */
int op_sub(int g, int k)
{
	return (g - k);
}

/**
 * op_mul - multiplies two numbers.
 * @g: first number.
 * @k: second number.
 *
 * Return: multiplication.
 */
int op_mul(int g, int k)
{
	return (g * k);
}

/**
 * op_div - to divide the two numbers.
 *
 * @g: is the first number.
 * @k: is the second number.
 *
 * Return: division.
 */
int op_div(int g, int k)
{
	if (k == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (g / k);
}

/**
 * op_mod - to calculate the module of the two numbers.
 *
 * @g: is the first number.
 * @k: is the second number.
 *
 * Return: to remainder the division.
 */
int op_mod(int g, int k)
{
	if (k == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (g % k);
}

