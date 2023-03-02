#include "main.h"

/**
* print_number - prints an integer
* @n: the integer to print
*/
void print_number(int n)
{
int digits = 1;
int divisor = 1;
int i, digit;

if (n < 0)
{
_putchar('-');
n = -n;
}
while (n / divisor >= 10)
{
digits++;
divisor *= 10;
}
for (i = 0; i < digits; i++)
{
digit = (n / divisor) % 10;
_putchar(digit + '0');
divisor /= 10;
}
_putchar(n % 10 + '0');
}
