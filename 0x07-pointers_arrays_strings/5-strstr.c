#include "main.h"
/**
 * *_strstr - a function that locates a substring
 * @haystack: first parameter
 * @needle: second parameter
 *
 * Return: always 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while  (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
