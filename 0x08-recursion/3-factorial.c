#include "main.h"
/**
 * factorial - thst returns the factorial of number's given.
 *
 * @n: is the input number.
 * Return: is the factorial of the number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
