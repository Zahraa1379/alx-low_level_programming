#include "main.h"
/**
 * _sqrt_recursion - function that returns
 * the natural square root of a number
 * @n: a number
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (_sqrt_recursion(n, 2));
}
