#include "main.h"

/**
* _strncpy - copies a string up to n bytes.
* @dest: pointer to the destination array.
* @src: pointer to the source string.
* @n: maximum number of bytes to be copied.
* Return: pointer to the resulting string dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
