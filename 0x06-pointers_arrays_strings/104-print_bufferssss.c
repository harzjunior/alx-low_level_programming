#include "main.h"
#include <stdio.h>

/**
* print_buffer - prints the content of a buffer
* @b: the buffer to print
* @size: the number of bytes to print
*/
void print_buffer(char *b, int size)
{
int i, j;
unsigned char c;

if (size <= 0)
{
printf("\n");
return;
}

for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);

for (j = 0; j < 10; j++)
{
if (i + j < size)
{
c = *(b + i + j);
printf("%02x", c);
}
else
{
printf("  ");
}
if (j % 2 == 1)
{
printf(" ");
}
}

for (j = 0; j < 10 && i + j < size; j++)
{
c = *(b + i + j);
if (c >= ' ' && c <= '~')
{
putchar(c);
}
else{
putchar('.');
}

}
printf("\n");
}

}
