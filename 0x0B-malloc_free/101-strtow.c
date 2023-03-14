#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* count_words - Count the number of words in a string
* @str: The string to count words in
* Return: The number of words in str
*/
int count_words(char *str)
{
int count = 0;
int in_word = 0;

while (*str)
{
if (*str == ' ')
{
in_word = 0;
}
else if (!in_word)
{
in_word = 1;
count++;
}
str++;
}
return count;
}

/**
* strtow - Split a string into words
* @str: The string to split
* Return: An array of strings, or NULL if str is NULL or if memory allocation fails
*/
char **strtow(char *str)
{
int i, k;
char **words;
int word_count = 0, word_len = 0;

if (str == NULL || *str == '\0')
{
return NULL;
}
word_count = count_words(str);
words = malloc(sizeof(char *) * (word_count + 1));
if (words == NULL)
{
return (NULL);
}
for (i = 0; i < word_count; i++)
{
while (*str == ' ')
{
str++;
}
word_len = 0;
while (*(str + word_len) != ' ' && *(str + word_len) != '\0')
{
word_len++;
}
words[i] = malloc(sizeof(char) * (word_len + 1));
if (words[i] == NULL)
{
for (k = 0; k < i; k++)
{
free(words[k]);
}
free(words);
return NULL;
}
for (k = 0; k < word_len; k++)
{
words[i][k] = *(str++);
}
words[i][k] = '\0';
}
words[word_count] = NULL;
return words;
}
