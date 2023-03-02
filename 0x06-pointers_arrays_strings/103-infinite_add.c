#include "main.h"

/**
* infinite_add - Adds two numbers
* @n1: First number
* @n2: Second number
* @r: Buffer to store the result
* @size_r: Size of the buffer
* Return: Pointer to the result, or 0 if buffer is too small
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, i = 0, j = 0, sum = 0, carry = 0;

while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;

if (len1 + 2 > size_r || len2 + 2 > size_r)
return (0);

for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
if (sum >= 10)
{
carry = 1;
sum -= 10;
}
else
carry = 0;
r[i + j + 1] = sum + '0';
}

if (carry == 1)
{
if (len1 + 1 >= size_r || len2 + 1 >= size_r)
return (0);
r[0] = '1';
return (&r[0]);
}
else
{
return (&r[1]);
}
}
