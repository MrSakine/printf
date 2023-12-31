#include "main.h"

/**
 * _print_binary - prints an unsigned integer in binary format
 * @args: A list of arguments containing the integer to print
 *
 * Return: number of characters printed (int)
 */
int _print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char binary[33];
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
			binary[i] = num % 2 + '0';
			num /= 2;
			i++;
		}

		binary[i] = '\0';

		for (j = i - 1; j >= 0; j--)
		{
			_putchar(binary[j]);
			len++;
		}
	}
	return (len);
}
