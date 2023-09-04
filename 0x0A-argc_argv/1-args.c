#include <stdio.h>
#include "main.h"

/**
 *main - a function that prints the number of argument passed into it
 *@argc: argument count
 *@argv: argument arrays of string
 *
 *Return: 0 always
 */

int main(int argc, char *argv[])
{
(void) argv; /* ignore argv */
	printf("%d\n", argc - 1);

	return (0);
}
