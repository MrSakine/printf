#include "main.h"

int run(const char *format, va_list args);
void end(va_list args);

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
 * end - clean the arguments list
 * @args: A list of arguments pointing to
 *       the character to be printed.
 *
 * Return: void
 */
void end(va_list args)
{
	va_end(args);
}

/**
 * run - run the printf function
 * @format: string input
 * @args: A list of arguments pointing to
 *       the character to be printed.
 *
 * Return: number of characters printed (int)
 */
int run(const char *format, va_list args)
{
	int len = 0;
	int i = 0;

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

	return (len);
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
	int len = 0;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);
	len = run(format, args);
	end(args);

	return (len);
}