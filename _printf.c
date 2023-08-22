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
	if (f[0] == '%' && f[1] == ' ')
		return (-1);
	if (f[0] == '%' && f[1] == '\0')
		return (-1);
	if (f == NULL)
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
	int j;
	print_t *specifiers = get_specifiers();

	if (base_check(format) == -1)
		return (-1);

	while (format && (*(format + i)))
	{
		if (*(format + i) != '%')
			len += _putchar(*(format + i));
		else
		{
			format++;
			j = 0;

			while (j < SPECIFIER_SIZE && (*(format + i)) != *(specifiers[j].symbol))
				j++;

			if (j < SPECIFIER_SIZE)
				len += specifiers[j].p(args);
			else
				len += _print_invalid_specifier_output(format, i);
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
		return (-1);

	va_start(args, format);
	len = run(format, args);
	end(args);
	return (len);
}
