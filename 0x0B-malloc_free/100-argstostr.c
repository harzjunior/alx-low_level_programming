#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* argstostr - concatenates all arguments of a program
* @ac: argument count
* @av: argument vector
* Return: pointer to concatenated string
*/
char *argstostr(int ac, char **av)
{
    int i, len = 0, total_len = 0;
    char *str;

    if (ac == 0 || av == NULL)
        return (NULL);
    for (i = 0; i < ac; i++)
    {
        len = 0;
        while (av[i][len])
            len++;
        total_len += len + 1; 
    }
    str = malloc(sizeof(char) * total_len + 1);
    if (str == NULL)
        return (NULL);
    total_len = 0;
    for (i = 0; i < ac; i++)
    {
        len = 0;
        while (av[i][len])
        {
            str[total_len] = av[i][len];
            len++;
            total_len++;
        }
        str[total_len] = '\n';
        total_len++;
    }
    str[total_len] = '\0';
    return (str);
}
