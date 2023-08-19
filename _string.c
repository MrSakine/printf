#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - writes the character c to stdout
 * @s: The string to print
 *
 * Return: void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}

/**
 * _strlen - a function that gets a length of a tring
 *
 * @str: sting to get length
 *
 * Return: length of string
 */
int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
 * _print_char - Prints a char.
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 */
void _print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	_putchar(letter);
}

/**
 * _print_string - writes the character c to stdout
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 *
 * Return: length of string
 */
int _print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str != NULL)
	{
		_puts(str);

		return (_strlen(str));
	}
	else
		_puts("(null)");

	return (0);
}