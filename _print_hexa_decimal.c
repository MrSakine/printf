#include "main.h"

/**
 * _print_hexa_decimal_small - prints an unsigned integer in hexa format
 * @args: A list of arguments containing the integer to print
 *
 * Return: number of characters printed (int)
 */
int _print_hexa_decimal_small(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    char hexa[33];
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
            int tmp = num % 16;

            if (tmp < 10)
                hexa[i] = tmp + '0';
            else
                hexa[i] = 'a' + (tmp - 10);

            num /= 16;
            i++;
        }

        hexa[i] = '\0';

        for (j = i - 1; j >= 0; j--)
        {
            _putchar(hexa[j]);
            len++;
        }
    }
    return (len);
}

/**
 * _print_hexa_decimal_large - prints an unsigned integer in hexa format
 * @args: A list of arguments containing the integer to print
 *
 * Return: number of characters printed (int)
 */
int _print_hexa_decimal_large(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    char hexa[33];
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
            int tmp = num % 16;

            if (tmp < 10)
                hexa[i] = tmp + '0';
            else
                hexa[i] = 'A' + (tmp - 10);

            num /= 16;
            i++;
        }

        hexa[i] = '\0';

        for (j = i - 1; j >= 0; j--)
        {
            _putchar(hexa[j]);
            len++;
        }
    }
    return (len);
}
