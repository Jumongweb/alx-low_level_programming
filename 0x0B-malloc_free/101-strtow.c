#include <stdlib.h>
#include "main.h"

/**
 * count_word -  a function that splits a string into words
 * @s: string to evaluate
 *
 * Return: 0 always
 */

int count_word(char *s)
{
	int beta, a, z;

	beta = 0;
	z = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			beta = 0;
		else if (beta == 0)
		{
			beta = 1;
			z++;
		}
	}

	return (z);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **echo, *tmp;
	int i, j = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	echo = (char **) malloc(sizeof(char *) * (words + 1));
	if (echo == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				echo[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	echo[j] = NULL;

	return (echo);
}
