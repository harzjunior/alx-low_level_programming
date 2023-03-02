#include "main.h"

/**
* leet - encode a string into 1337
* @str: the string to be encoded
* Return: a pointer to the encoded string
*/
char *leet(char *str)
{
char *s = str;
char *leet = "aAeEoOtTlL44337011";
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; leet[j] != '\0'; j += 2)
{
if (s[i] == leet[j])
{
s[i] = leet[j + 1];
break;
}
}
}
return (str);
}
