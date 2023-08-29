#include "main.h"
/**
 * *_memcpy - a function that copies memory area
 * @dest: memory to store the copied
 * @src: memory to be copied
 * *@n: value to be copied
 *
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c = 0;
	int i = n;

	for (; c < i; c++)
	{
		dest[c] = src[c];
		n--;
	}
	return (dest);
}
