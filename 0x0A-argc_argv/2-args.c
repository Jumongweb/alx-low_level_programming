#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints all the argument it receives
 * @argc: argument count
 * @argv: argument array of string
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);

	return (0);
}
