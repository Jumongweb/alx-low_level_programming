#include "main.h"

/**
 * read_textfile - a function to read a text file and
 * prints it to standard output
 * @filename: pointer
 * @letters: number of values to be printed
 *
 * Return: 0 always
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	char *buffer;
	ssize_t n_rd, n_wr;

	if (!filename)
		return (0);
	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	n_rd = read(fl, buffer, letters);
	if (n_rd == -1)
	{
		free(buffer);
		return (0);
	}
	close(fl);
	n_wr = write(STDOUT_FILENO, buffer, n_rd);
	free(buffer);
	if (n_wr == -1)
		return (0);
	return (n_wr);
}
