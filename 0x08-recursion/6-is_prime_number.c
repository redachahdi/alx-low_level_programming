#include "main.h"
/**
 * number_pr - that detects if the input number is prime.
 * @n: is the input number.
 *
 * @d: is the iterator.
 * Return:  0 if n is not the prime number. 1 if n is the prime number.
 *
 */
int number_pr(unsigned int n, unsigned int d)
{
	if (n % d == 0)
	{
		if (n == d)
			return (1);
		else
			return (0);
	}
	return (0 + number_pr(n, d + 1));
}
/**
 * is_prime_number - that detects if the input number is a prime number.
 * @n: is the input number.
 *
 * Return: 1 if n is the prime number. 0 if n is not the prime number.
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (number_pr(n, 2));
}
