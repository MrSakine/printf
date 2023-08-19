#include "main.h"

void print_number(int n);

/**
 * _print_number - print numbers
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 *
 * Return: length of string
 */
void _print_number(va_list arg)
{
    int num;

    num = va_arg(arg, int);
    print_number(num);
}

/**
 * print_number - prints an integer
 *
 * @n: integer to print
 *
 * Return: void.
 */
void print_number(int n)
{
    unsigned int num = n;

    if (n < 0)
    {
        _putchar('-');
        num = -n;
    }

    if (num / 10)
    {
        print_number(num / 10);
    }

    _putchar((num % 10) + '0');
}