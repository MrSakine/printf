#include "main.h"

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

	if ((format[0] == '%' && !format[1]) || !format)
	{
		return (-1);
	}
	if (format[0] == '%' && format[1] == ' ' && !format[2])
	{
		return (-1);
	}
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
		}
		i++;
	}

	va_end(args);
	return (i);
}