#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 */
void more_numbers(void)
{
int n;
int i;

i = 0;

while (i < 10)
{
n = '0';
while (n <= 'z')
{
_putchar(n);
n++;
}
_putchar('\n');
i++;
}
}
i
