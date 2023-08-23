#include "main.h"

/**
 * _print_reverse_string - writes the character
 * in reverse to stdout
 *
 * @arg: A list of arguments containing the integer to print
 *
 * Return: number of characters printed (int)
 */
int _print_reverse_string(va_list arg)
{
    char *c;
    int i;
    int j;
    int len = 0;

    c = va_arg(arg, char *);
    if (c == NULL)
    {
        c = "(null)";
    }

    for (i = 0; c[i]; i++)
        len++;

    for (j = i - 1; j >= 0; j--)
        _putchar(c[j]);

    return (len);
}
