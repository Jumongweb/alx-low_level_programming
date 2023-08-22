#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a function that generate valid random passwords
 *
 * Return: 0 always
 */

int main(void)
{
	int password[100];
	int i, j, k;

	j = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		j += (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - j) - '0' < 78)
		{
			k = 2772 - j - '0';
			j += k;
			putchar(k + '0');
			break;
		}
	}

	return (0);
}

