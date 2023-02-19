#include <stdio.h>

/**
 *main - program that prints all possible different combinations of three digitb
 *Numbers must be separated by ,, followed by a space
 *The three digits must be different
 *012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
*rint only the smallest combination of three digits
 *Numbers should be printed in ascending order, with three digits
 *You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar six times maximum in your code
 * You are not allowed to use any variable of type char
 *All your code should be in the main function
 *Return: 0
 */

int main(void)
{
int i = 0, j = 1, k = 2;
while (i <= 7)
{
while (j <= 8)
{
while (k <= 9)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i < 7)
{
putchar(',');
putchar(' ');
}
k++;
}
j++;
k = j + 1;
}
i++;
j = i + 1;
k = j + 1;
putchar('\n');
return (0);
}
}
