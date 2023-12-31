#include "main.h"

/**
 * get_specifiers - get input specifiers
 *
 * Return: array of print_t types
 */
print_t *get_specifiers()
{
	static print_t specifiers[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"d", _print_number},
		{"i", _print_number},
		{"u", _print_unsigned_number},
		{"b", _print_binary},
		{"o", _print_octal},
		{"x", _print_hexa_decimal_small},
		{"X", _print_hexa_decimal_large},
		{"S", _print_string_ascii},
		{"r", _print_reverse_string},
		{"R", _print_rot_13},
		{"%", _print_percentage},
		{"p", _print_address}
	};

	return (specifiers);
}
