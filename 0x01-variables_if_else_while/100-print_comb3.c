#include <stdio.h>

/**
 * main -  prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 48 ; n < 58 ; n++)
	{
		for (m = 48; m < 58 ; m++)
		{
			if (!(n > m || n == m))
			putchar(n);
		putchar(m);
		{
			if (n == '57' &&  m == '58')
			putchar(',');
			putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}
