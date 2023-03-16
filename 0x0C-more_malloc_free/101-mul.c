#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string.
 * @s: The string to process.
 *
 * Return: The length of the string.
 */
size_t _strlen(const char *s)
{
    size_t len = 0;

    while (*s++)
        len++;

    return (len);
}

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value.
 */
int _atoi(const char *s)
{
    int sign = 1;
    int value = 0;

    if (*s == '-')
    {
        sign = -1;
        s++;
    }

    while (_isdigit(*s))
    {
        value = value * 10 + (*s - '0');
        s++;
    }

    return (sign * value);
}

/**
 * print_error - Prints an error message and exits.
 */
void print_error(void)
{
    printf("Error\n");
    exit(98);
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: The command-line arguments.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char **argv)
{
    int num1, num2, result;

    if (argc != 3 || !_isdigit(*argv[1]) || !_isdigit(*argv[2]))
        print_error();

    num1 = _atoi(argv[1]);
    num2 = _atoi(argv[2]);

    result = num1 * num2;

    printf("%d\n", result);

    return (0);
}

