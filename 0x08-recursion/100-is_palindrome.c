#include "main.h"
/**
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not
 * @s: a string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s);
{
	if (*s == 0)
		return (1);
return (is_palindrome(s, 0));
}
