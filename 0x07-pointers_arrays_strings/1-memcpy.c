#include "main.h"
/**
 *_memcpy - a function that copy memory area
 *@dest: the memory area that get the copied value
 *@src: parameter where memory will be copied
 *@n: parameter with int
 *
 *Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = 0;

	for (i = 0; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
