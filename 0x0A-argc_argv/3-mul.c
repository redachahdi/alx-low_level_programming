#include <stdio.h>
#include <stdlib.h>
/**
 * main - is the two numbers's multiplies .
 * @argc: is the number of command line(arguments).
 *
 * @argv: is the array that contains the program command line(arguments).
 * Return: 0 - is the success.
 */
int main(int argc, char const *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
