#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: pointer to e file.
 * @text_content: value to be added to the file.
 *
 * Return: If success 1 and -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int put, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	put = open(filename, O_WRONLY | O_APPEND);
	wr = write(put, text_content, len);

	if (put == -1 || wr == -1)
		return (-1);
	close(put);

	return (1);
}
