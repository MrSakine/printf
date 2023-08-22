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
	int len = 0;

	if (num == 0)
	{
		_putchar('0');
		len++;
	}
	else
	{
		len += print_hexa_decimal(num, 0);
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
	int len = 0;

	if (num == 0)
	{
		_putchar('0');
		len++;
	}
	else
	{
		len += print_hexa_decimal(num, 1);
	}

	return (len);
}

/**
 * print_hexa_decimal - prints an unsigned integer in hexa format
 * @num: integer to print
 * @mode: type of integer
 *
 * Return: number of characters printed (int)
 */
int print_hexa_decimal(unsigned int num, int mode)
{
	int len = 0;
	int j;
	int i = 0;
	char h[33];

	while (num > 0)
	{
		int tmp = num % 16;

		if (tmp < 10)
			h[i] = tmp + '0';
		else
			h[i] = tmp < 10 ? (tmp + '0') : mode == 1 ? ('A' + (tmp - 10)) : ('a' + (tmp - 10));

		num /= 16;
		i++;
	}

	h[i] = '\0';

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(h[j]);
		len++;
	}

	return (len);
}
