#include "main.h"
/**
 * square_full - that returns the natural root square of the number.
 * @d: is the iterator.
 * @n: is the input of the number
 * Return: the square root or -1.
 *
 */
int square_full(int n, int d)
{
	if (d % (n / d) == 0)
	{
		if (d * (n / d) == n)
			return (d);
		else
			return (-1);
	}
	return (0 + square_full(n, d + 1));
}
/**
 * _sqrt_recursion - that returns the natural square root of the number.
 *
 * @n: is the input number.
 * Return: to the natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (square_full(n, 2));
}
