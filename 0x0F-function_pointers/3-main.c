#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - a function that prints the result of operations.
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 always
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int x, y;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	operator = argv[2];
	y = atoi(argv[3]);

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' && y == 0) ||
	    (*operator == '%' && y == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(x, y));

	return (0);
}
