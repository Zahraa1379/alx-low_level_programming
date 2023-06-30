#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: the first string
 * @src: the second string
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int n;
	int s1 = 0, s2 = 0;

	while (*(s1 + s2) != '\0')
	{
		s1++;
	}
	while (s2 < n)
	{
		*(dest + s1) = *(src + s2);
		if (*(src + s2) == '\0')
			break;
		s1++;
		s2++;
	}
	return (dest);
}
