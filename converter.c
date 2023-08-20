#include "main.h"

/**
 * _print_invalid_specifier_output - writes the character c to stdout
 * @format: The character to print
 * @index: index of current character from the string
 *
 * Return: int
 */
int _print_invalid_specifier_output(char const *format, int index)
{
	int len = 0;

	_putchar(*(format + (index - 1)));
	len++;
	_putchar(*(format + index));
	len++;

	return (len);
}
