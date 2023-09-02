#include "main.h"

/**
 * char *_strcpy - a function that copy the string pointed to by src
 * @dest: 1st parameter given
 * @src: 2nd parameter given
 *
 * Return: always 0;
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}

