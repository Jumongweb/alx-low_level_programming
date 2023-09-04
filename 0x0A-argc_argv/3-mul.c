#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument array of strings
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int multi;

		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			a = atoi(argv[1]);
			b = atoi(argv[2]);
			multi = a * b;
			printf("%d\n", multi);
		}
return (0);
}
