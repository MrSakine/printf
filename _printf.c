#include "main.h"

/**
 * base_check - base check of the input
 * @f: string input
 *
 * Return: -1 if something wrong
 */
int base_check(const char *f)
{
	if ((f[0] == '%' && (!f[1] || !f)) || (f[1] == ' ' && !f[2]))
		return (-1);

	return (0);
}

/**
 * _printf - produces output according to a format
 * @format: string input
 *
 * Return: number of characters printed (int)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int len = 0;

	va_start(args, format);
	while (format && (*(format + i)))
	{
		if (*(format + i) != '%')
		{
			_putchar(*(format + i));
			len++;
		}
		else
		{
			format++;
			if (*(format + i) == '%')
			{
				_putchar('%');
				len++;
			}
			else if (*(format + i) == 's')
			{
				int n = _print_string(args);

				len += n;
			}
			else if (*(format + i) == 'c')
			{
				_print_char(args);
				len++;
			}
			else if (*(format + i) == 'd' || *(format + i) == 'i')
			{
				_print_number(args);
				len++;
			}
		}
		i++;
	}
	va_end(args);

	return (i);
}