#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
*           which contains a copy of the string given as a parameter.
* @str: the string to duplicate
 * Return: a pointer to the duplicated string or NULL if str is NULL or
 *         if insufficient memory was available
 */
char *_strdup(char *str)
{
char *dup_str;
unsigned int i, len;

if (str == NULL)
return (NULL);
len = 0;
while (str[len] != '\0')
len++;
dup_str = malloc(sizeof(char) * (len + 1));
if (dup_str == NULL)
return (NULL);
for (i = 0; i < len; i++)
dup_str[i] = str[i];
dup_str[len] = '\0';
return (dup_str);
}
