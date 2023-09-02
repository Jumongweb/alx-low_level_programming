#include <stdio.h>
#include "main.h"

/**
 * main - a function that print the number of arguments passed into it
 * @argc: argument count
 * @argv: arguments vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

