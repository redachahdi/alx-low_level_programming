#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - function that  print text and read.
 *
 * @filename: is the name of char file.
 * @letters: is the number of letters.
 *
 * Return: read the file .
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_l;
	int re_d, writ_r;
	char *bf = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}

	f_l = open(filename, O_RDWR);
	if (f_l == -1)
	{
		return (0);
	}
	re_d = read(f_l, bf, letters);
	if (re_d == -1)
	{
		return (0);
	}
	writ_r = write(STDOUT_FILENO, bf, re_d);
	if (writ_r == -1)
	{
		return (0);
	}
	close(f_l);
	free(bf);
	return (writ_r);
}
