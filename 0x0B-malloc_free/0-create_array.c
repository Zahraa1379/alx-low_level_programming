#include "main.h"
#include <stdlib.h>
/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char.
 * @c: char
 * @size: size of the array
 * Return: NULL if size = 0
 * a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i;

	if (size == 0)
		return (NULL);

	n = malloc(sizeof(c) * size);

	if (n == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		n[i] = c;
	return (n);
}
