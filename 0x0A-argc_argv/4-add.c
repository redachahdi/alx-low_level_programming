#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - is adds the positive numbers.
 * @argc: is the number of command line (arguments).
 * @argv: is the array that contains the program command line (arguments).
 * Return: 0 - is the (success).
 */
int main(int argc, char const *argv[])
{
	int a, b, dd = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		dd += atoi(argv[a]);
	}
	printf("%d\n", dd);
	return (0);
}
