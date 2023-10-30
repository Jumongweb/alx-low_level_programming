#include "main.h"

/**
 * append_text_to_file - a function to appends text at the end of a file
 * @filename: file pointer
 * @text_content: character pointer
 *
 * Return: 0 always
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl;
	int nletters;
	int rw;

	if (!filename)
		return (-1);

	fl = open(filename, O_WRONLY | O_APPEND);

	if (fl == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rw = write(fl, text_content, nletters);

		if (rw == -1)
			return (-1);
	}

	close(fl);

	return (1);
}
