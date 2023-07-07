#include "main.h"
#include <stdio.h>
/**
 * _strchr -  locates a character in a string
 * @s: the string
 * @c: the character in s
 * Return: pointer to the first occurrence of the
 * character c in the string
 * or NULL  if the character is not found
 */
char *_strchr(char *s, char c)
	{
		int i;

		while (1)
		{
			i = *s++;
			if (i == c)
			{
				return (s - 1);
			}
			if (i == 0)
			{
				return (NULL);
			}
		}
}
