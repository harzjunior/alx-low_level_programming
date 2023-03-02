#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
/**
* add_strings - Adds the numbers stored in two strings.
* @n1: The string containing the first number to be added.
* @n2: The string containing the second number to be added.
* @r: The buffer to store the result.
* @r_index: The current index of the buffer.
* Return: If r can store the sum - a pointer to the result.
* If r cannot store the sum - 0.
*/
char *add_strings(char *n1, char *n2, char *r, int r_index)
{
int num, tens = 0;

for (; *n1 && *n2; n1--, n2--, r_index--)
{
num = (*n1 - '0') + (*n2 - '0');
num += tens;

*(r + r_index) = (num % 10) + '0';
tens = num / 10;
}

for (; *n1; n1--, r_index--)
{
num = (*n1 - '0') + tens;
*(r + r_index) = (num % 10) + '0';
tens = num / 10;
}

for (; *n2; n2--, r_index--)
{
num = (*n2 - '0') + tens;
*(r + r_index) = (num % 10) + '0';
tens = num / 10;
}

if (tens && r_index >= 0)
{
*(r + r_index) = (tens % 10) + '0';
return (r + r_index);
}

else if (tens && r_index < 0)
return (0);

return (r + r_index + 1);
}

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
