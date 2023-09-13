#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints its own opcodes
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int byte, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < byte; i++)
	{
		if (i == byte - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
