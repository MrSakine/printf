#include "main.h"

/**
 * _print_address - prints address
 * @args: arguments
 * Return: address to pointer
 */

int _print_address(va_list args)
{
	void *ptr = va_arg(args, void *);

	char hexChars[] = "0123456789abcdef";
	char hexString[16];
	int index = 0, i, digit, len;
	uintptr_t num;

	num = (uintptr_t)ptr;

	while (num > 0)
	{
		digit = num % 16;

		hexString[index] = hexChars[digit];
		index++;
		num /= 16;
	}

	len = (index == 0) ? 1 : index + 2;

	_putchar('0');
	_putchar('x');

	if (index == 0)
	{
		_putchar('0');
	}
	else
	{
		for (i = index - 1; i >= 0; i--)
		{
			_putchar(hexString[i]);
		}
	}
	return (len);
}
