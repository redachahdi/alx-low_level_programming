#include <stdio.h>
/**
 * main - is the prints the number of arguments passed into it.
 * @argc: is the number of the command line of the arguments.
 *
 * @argv: is the array that contains the program command line of the arguments.
 * Return: 0 - is the success.
 */
int main(int argc, char const *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
