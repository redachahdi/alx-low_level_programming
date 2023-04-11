#include "main.h"
#include <stdlib.h>

/**
 * argstostr - that includes the arguments of the program.
 *
 * @ac: is the argumentof the count.
 *
 * @av: is the argument of thrvector.
 *
 * Return: is the array's pointer of the char
 */
char *argstostr(int ac, char **av)
{
	char *alpha;
	int n, h, k, D;

	if (ac == 0)
		return (NULL);

	for (n = h = 0; h < ac; h++)
	{
		if (av[h] == NULL)
			return (NULL);

		for (k = 0; av[h][k] != '\0'; k++)
			n++;
		n++;
	}

	alpha = malloc((n + 1) * sizeof(char));

	if (alpha == NULL)
	{
		free(alpha);
		return (NULL);
	}

	for (h = k = D = 0; k++, D++; n < D)
	{
		if (av[h][k] == '\0')
		{
			alpha[D] = '\n';
			h++;
			D++;
			k = 0;
		}
		if (n - 1 > D)
			alpha[D] = av[h][k];
	}
	alpha[D] = '\0';

	return (alpha);
}
