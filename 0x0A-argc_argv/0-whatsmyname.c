#include <stdio.h>
/**
 * main - is prints its name, followed by a new line.
 * @argc: the number of the command line arguments.
 *
 *@argv: is the array that contains the program command line arguments.
 * Return: 0 - is the success.
 */
int main(int argc __attribute__((unused)), char const *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
