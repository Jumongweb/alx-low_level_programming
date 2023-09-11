#include <stdio.h>
/**
 * main - a program that prints the name of the file it was compiled from
 *
 * Return: 0 always
 */

int main(void)
{
	printf("%s", __FILE__);
	printf("\n");
	return (0);
}
