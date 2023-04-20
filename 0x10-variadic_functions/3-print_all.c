#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

/**
 * print_all - the function that prints all .
 *
 * @format: a list of types of arguments.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int a = 0, b, k = 0;
	char *p_strg;
	const char argmt[] = "cifs";

	va_start(valist, format);
	while (format && format[a])
	{
		b = 0;
		while (argmt[b])
		{
			if (format[a] == argmt[b] && k)
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[a])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), k = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), k = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), k = 1;
			break;
		case 's':
			p_strg = va_arg(valist, char *), k = 1;
			if (!p_strg)
			{
				printf("(nil)");
				break;
			}
			printf("%s", p_strg);
			break;
		} a++;
	}
	printf("\n"), va_end(valist);
}
