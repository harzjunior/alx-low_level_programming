#include "main.h"
#include <stdio.h>

/**
* leet - encode a string into 1337
* @str: the string to be encoded
* Return: a pointer to the encoded string
*/
char *leet(char *str)
{
int i, j;
char r[] = "AEOTLaeotl";
char n[] = "43071";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; r[j] != '\0'; j++)
{
if (str[i] == r[j])
{
str[i] = n[j];
break;
}
}
}
return (str);
}
