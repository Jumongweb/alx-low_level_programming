#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that encode a string using rot13
 * @s: parameter used as a pointer
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alpha_rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = alpha_rot[j];
				break;
			}
		}
	}
	return (s);
}

