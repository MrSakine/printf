#include "main.h"

int print_number(int n);

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
	return (print_number(num));
}

/**
 * print_number - prints an integer
 *
 * @n: integer to print
 *
 * Return: void.
 */
int print_number(int n)
{
	unsigned int num = n;
	int len = 1;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		len++;
	}

	if (num / 10)
		len += print_number(num / 10);

	_putchar((num % 10) + '0');

	return (len);
}
