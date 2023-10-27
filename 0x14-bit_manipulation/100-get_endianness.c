#include "main.h"

/**
 * get_endianness - a function to check the system byte order
 * Return: 0 always
 */

int get_endianness(void)
{
	int a = 1;
	int little_big;

	little_big = (int) (((char *)&a)[0]);
	return (little_big);
}
