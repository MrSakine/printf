#include "main.h"

/**
 * _print_string_ascii - writes the character c to stdout
 * @arg: A list of arguments containing the integer to print
 *
 * Return: number of characters printed (int)
 */
int _print_string_ascii(va_list arg)
{
	char *str;
	int i = 0;
	int len = 0;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		_puts("(null)");
		return (6);
	}

	while (str && *(str + i))
	{
		int n = *(str + i);

		if (n > 0 && (n < 32 || n >= 127))
		{
			_puts("\\x");
			len += 2;
			len += print_hexa_decimal_leading_zero(n, 1);
		}
		else
		{
			len += _putchar(*(str + i));
		}

		i++;
	}

	return (len);
}
