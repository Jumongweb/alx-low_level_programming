#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: first pointer
 * @text_content: second pointer
 *
 * Return: 0 always
 */

int create_file(const char *filename, char *text_content)
{
	int fl;
	int nletters;
	int rw;

	if (!filename)
		return (-1);

	fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fl == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rw = write(fl, text_content, nletters);

	if (rw == -1)
		return (-1);

	close(fl);

	return (1);
}
