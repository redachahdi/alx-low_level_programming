#include <stdio.h>
/**
 * main - is the prints all argument.
 * @argc: is the number of command line of the arguments.
 *
 * @argv: is the array that contains the program command line (arguments).
 * Return: 0 - is the success.
 */
int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
