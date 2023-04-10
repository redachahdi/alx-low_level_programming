#include <stdio.h>
#include <stdlib.h>
/**
 * main - is prints the minimum number of coins to make change.
 * the amount.
 * the money.
 *
 * @argc: is the number of command line (arguments).
 *
 * @argv: is the array that contains the program command line (arguments).
 * Return: 0 - is the success.
 */
int main(int argc, char const *argv[])
{
	int cet, coin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cet = atoi(argv[1]);

	while (cet > 0)
	{
		if (cet >= 25)
			cet -= 25;
		else if (cet >= 10)
			cet -= 10;
		else if (cet >= 5)
			cet -= 5;
		else if (cet >= 2)
			cet -= 2;
		else if (cet >= 1)
			cet -= 1;
		coin += 1;
	}
	printf("%d\n", coin);
	return (0);
}
