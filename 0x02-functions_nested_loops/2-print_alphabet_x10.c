#include "main.h"

/**
 * main - A code that prints 10 times the alphabet, in lowercase.
 * 
 *return: 0;
 */

void print_alphabet_x10(void)
{
        char ch;

        int i;
	
        i = 0;

        while (i < 10)
        {
                ch = 'a';
                while (ch <= 'z')
                {
                        _putchar(ch);
                        ch++;
                }
                _putchar('\n');
                i++;
        }
}
