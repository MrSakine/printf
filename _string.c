#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}

void _puts(char *s)
{
        int i;

        for (i = 0; s[i] != '\0'; i++)
        {
                _putchar(s[i]);
        }
}

/**
 * print_char - Prints a char.
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 */
void _print_char(va_list arg)
{
        char letter;

        letter = va_arg(arg, int);
        _putchar(letter);
}

void _print_string(va_list arg)
{
        char *str;

        str = va_arg(arg, char *);

        _puts(str);
}