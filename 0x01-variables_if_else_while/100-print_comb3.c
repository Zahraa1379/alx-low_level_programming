#include <stdio.h>

/**
 * main -  prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n ;
	int m ;

	for (n = 0 ; n < 9 ; n++)
	{
		for (m = 0; m < 9 ; m++)
		{
			if (n != m)
			putchar(n);
		putchar(m);
			putchar(',');
			putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
