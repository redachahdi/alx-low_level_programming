#include "variadic_functions.h"

/**
 * sum_them_all - the fonction that returns the sum of the parameter.
 *
 *@n: is the amount of the arguments.
 
 * Return: is the sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int k;
	int of_sum = 0;

	if (n == 0)
	{
		return (0);
	}	

	va_start(valist, n);

	for (k = 0; k < n; k++)
		of_sum  += va_arg(valist, int);

	va_end(valist);

	return (of_sum );
}
