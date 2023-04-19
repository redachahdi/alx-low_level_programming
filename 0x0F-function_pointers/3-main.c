#include "3-calc.h"

/**
 * main - to check the code of alx 
 *
 * @argc: is the argument of count.
 * @argv: is the argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int g, k;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	g = atoi(argv[1]);
	k = atoi(argv[3]);

	printf("%d\n", operation(g, k));
	return (0);
}
