#include "main.h"
/**
 * int_islower - checks for lowercase character
 * @c: is the char to be checked
 * Returns: 1 if c is lowercase, otherwise 0
 */
int_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
