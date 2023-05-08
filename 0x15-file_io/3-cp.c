#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * copier - function that copies the source  to desination.
 *
 * @dest_file: is the destination file
 * @sorc_file: is the source file
 *
 * Return: is the integer
 */
int copier(char *dest_file, char *sorc_file)
{
	char *bf[1024];
	int d_te, f_des;
	int f_red, f_wr;
	int f_crt, f_trt;

	f_des = open(sorc_file, O_RDONLY);
	if (f_des < 0)
	{
		return (98);
	}

	d_te = open(dest_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (d_te < 0)
	{
		return (99);
	}

	f_red = read(f_des, bf, 1024);
	if (f_red < 0)
	{
		return (98);
	}

	while (f_red > 0)
	{
		f_wr = write(d_te, bf, f_red);
		if (f_wr < 0)
		{
			return (99);
		}
		f_red = read(f_des, bf, 1024);
		if (f_red < 0)
		{
			return (98);
		}
	}

	f_crt = close(f_des);
	if (f_crt < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close f_des %d\n", f_crt);
		return (100);
	}
	f_trt = close(d_te);
	if (f_trt < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close f_des %d\n", f_trt);
		return (100);
	}
	return (0);
}

/**
 * main - function that the main function
 *
 * @val_ue: is the argument count
 * @n_value: is the argument vector
 *
 * Return: is always 0
 */
int main(int val_ue, char **n_value)
{
	int h;

	if (val_ue != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	h = copier(n_value[2], n_value[1]);
	switch (h)
	{
		case (98):
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", n_value[1]);
			exit(98);
		case (99):
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", n_value[2]);
			exit(99);
		case (100):
			exit(100);
		default:
			return (0);
	}
}
