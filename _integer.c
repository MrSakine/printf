#include "main.h"

int print_number(int n, int mode);

/**
 * _print_number - print numbers
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 *
 * Return: length of string
 */
int _print_number(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	return (print_number(num, 0));
}

/**
 * _print_unsigned_number - print numbers
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 *
 * Return: length of string
 */
int _print_unsigned_number(va_list arg)
{
	unsigned int num;

	num = va_arg(arg, unsigned int);
	return (print_number(num, 1));
}

/**
 * print_number - prints an integer
 *
 * @n: integer to print
 * @mode: type of integer
 *
 * Return: length of string.
 */
int print_number(int n, int mode)
{
	unsigned int num = n;
	int len = 1;

	if (mode == 0)
	{
		if (n < 0)
		{
			_putchar('-');
			num = -n;
			len++;
		}
	}
	else
	{
		if (n == 0)
		{
			_putchar('0');
			len++;
		}
	}

	if (num / 10)
		len += print_number(num / 10, mode);

	_putchar((num % 10) + '0');

	return (len);
}
