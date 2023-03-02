#include "main.h"
#include <string.h>

/**
* cap_string - capitalizes all words of a string.
* @s: input string.
* Return: a pointer to the resulting string.
*/
char *cap_string(char *s)
{
int i;
char sep[] = " \t\n,;.!?\"(){}";

for (i = 0; s[i]; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
if (i == 0 || strchr(sep, s[i - 1]))
s[i] -= ('a' - 'A');
}
}
return (s);
}
