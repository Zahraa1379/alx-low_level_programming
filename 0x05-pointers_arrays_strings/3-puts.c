#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: a string
 * Return: no return
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
}
	_putchar('\n');
	}
