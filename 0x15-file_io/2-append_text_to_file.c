#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - function that appand the text.
 *
 * @filename: is the filename
 * @text_content: is the text content.
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_l;
	int l_gh;
	int wri_t;

	if (filename == NULL)
	{
		return (-1);
	}
	f_l = open(filename, O_APPEND | O_WRONLY);
	if (f_l == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (l_gh = 0; text_content[l_gh] != '\0'; l_gh++)
		;
		wri_t = write(f_l, text_content, l_gh);
		if (wri_t == -1)
		{
			return (-1);
		}
	}
	close(f_l);
	return (1);
}
