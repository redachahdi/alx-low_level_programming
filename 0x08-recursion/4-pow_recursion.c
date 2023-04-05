#include "main.h"
/**
 * _pow_recursion - that returns the x value raised the power of y.
 *
 * @y: is the exponent of x.
 * @x: is the base of y.
 * Return: is the value of the exponent.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{	return (-1);
	}
	else if (y == 0)
	{	return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
