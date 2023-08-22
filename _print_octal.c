#include "main.h"

/**
 * _print_octal - prints an unsigned integer in octal format
 * @args: A list of arguments containing the integer to print
 *
 * Return: number of characters printed (int)
 */
int _print_octal(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    char octal[33];
    int len = 0, j;

    if (num == 0)
    {
        _putchar('0');
        len++;
    }
    else
    {
        int i = 0;

        while (num > 0)
        {
            octal[i] = num % 8 + '0';
            num /= 8;
            i++;
        }

        octal[i] = '\0';

        for (j = i - 1; j >= 0; j--)
        {
            _putchar(octal[j]);
            len++;
        }
    }
    return (len);
}