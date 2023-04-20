#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - the fonction that prints strings.
 *
 * @separator: is the string .
 * @n: is the number of strings .
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int k;
	char *pr_strg;

	va_start(valist, n);

	for (k = 0; k < n; k++)
	{
		pr_strg = va_arg(valist, char *);

		if (pr_strg)
			printf("%s", pr_strg);
		else
			printf("(nil)");

		if (k < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
