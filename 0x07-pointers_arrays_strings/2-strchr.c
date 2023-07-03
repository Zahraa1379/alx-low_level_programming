#include "main.h"
/**
 * _strchr -  locates a character in a string
 * @s: the string
 * @c: the character in s
 * Return: pointer to the first occurrence of the
 * character c in the string
 * or 0  if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == c)
		{
			return (i);
		}
	}
	return (0);
}
