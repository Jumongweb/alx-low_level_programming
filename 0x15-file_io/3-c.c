#include "main.h"
/**
 * file_error - a function to check for file and handle error
 * @file_from: file to be copied from
 * @file_to: file to be copied to
 * @argv: argument vector
 *
 * Return: 0 always
 */

void file_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", agrv[2]);
		error(99);
	}
}

/**
 * main - a function to copy content one one file to another
 * @argc: number of argument
 * @argv: argument vector
 *
 * Return: 0 always
 */

int main(int argc, char *argv)
{
	int file_from, file_to, close_err;
	ssize_t chars;
	ssize_t wr_num;

	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_error(file_from, file_to, argv);

	chars = 1024;
	while (chars == 1024)
	{
		chars = read(file_from, buff, 1024);
		if (chars == -1)
			file_error(-1, 0, argv);
		
		wr_num = write(file_to, buff, 1024);

		file_error(0, -1,  argv);
	}
	close_err = close(file_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
		exit(100);
	}
	close_err = close(file_to);
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
