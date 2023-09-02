#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints its name
 * @argc: argument count
 * @argv: arguments vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}

