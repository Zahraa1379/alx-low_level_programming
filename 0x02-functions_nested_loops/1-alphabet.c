#include "main.h"
/**
 * print_alphabet  - prints the alphabet, in lowercase, followed by a new line
 * return : 0
 */
void print_alphabet(void)
{
	char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
		_putchar('\n');
	}
	return (0);
}
