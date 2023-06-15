#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - function Generates and prints password
 *
 * @argc: is the number of argument.
 * @argv: is the  array of pointers
 *
 * Return: is always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *dex_co;
	int len = strlen(argv[1]);
	int k, tmp;

	dex_co = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (len ^ 59) & 63;
	password[0] = dex_co[tmp];

	tmp = 0;
	for (k = 0; k < len; k++)
		tmp += argv[1][k];
	password[1] = dex_co[(tmp ^ 79) & 63];

	tmp = 1;
	for (k = 0; k < len; k++)
		tmp *= argv[1][k];
	password[2] = dex_co[(tmp ^ 85) & 63];

	tmp = 0;
	for (k = 0; k < len; k++)
	{
		if (argv[1][k] > tmp)
			tmp = argv[1][k];
	}
	srand(tmp ^ 14);
	password[3] = dex_co[rand() & 63];

	tmp = 0;
	for (k = 0; k < len; k++)
		tmp += (argv[1][k] * argv[1][k]);
	password[4] = dex_co[(tmp ^ 239) & 63];

	for (k = 0; k < argv[1][0]; k++)
		tmp = rand();
	password[5] = dex_co[(tmp ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
