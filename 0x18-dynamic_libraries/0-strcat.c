#include "main.h"
#include <stdio.h>

/**
*_strcat - concatenates two strings.
*@dest: pointer to the destination array.
*@src: pointer to the source string.
*Return: pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
int dest_length, i;

for (dest_length = 0; dest[dest_length] != '\0'; dest_length++)
;
for (i = 0; src[i] != '\0'; i++)
dest[dest_length + i] = src[i];
dest[dest_length + i] = '\0';
return (dest);
}
