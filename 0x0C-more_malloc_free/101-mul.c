#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - a function to checks if a string contains a non-digit char
 * @s: input value
 *
 * Return: 0 always
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - function that shows the length of a string
 * @s: pointer
 *
 * Return: 0 always
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int length1, length2, len, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	length1 = _strlen(s1);
	length2 = _strlen(s2);
	len = length1 + length2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= length1 + length2; i++)
		result[i] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		digit1 = s1[length1] - '0';
		carry = 0;
		for (length2 = _strlen(s2) - 1; length2 >= 0; length2--)
		{
			digit2 = s2[length2] - '0';
			carry += result[length1 + length2 + 1] + (digit1 * digit2);
			result[length1 + length2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[length1 + length2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

