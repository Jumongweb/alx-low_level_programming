#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints it own name
 * @argc: argument count
 * @argv: argumnet array of strings
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
(void) argc; /* ignore argv */
		printf("%s\n", argv[0]);
	return (0);
}
