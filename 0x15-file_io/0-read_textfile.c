#include "main.h"
/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: pointer to street
 * @letters: input value
 *
 * Return: 0 always
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t rd, wr;
	char *buffer;

	if (!filename)
		return (0);

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	rd = read(file_d, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	close(file_d);
	free(buffer);

	return (wr);

}
