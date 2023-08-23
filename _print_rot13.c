#include "main.h"

/**
 * _print_rot_13 - writes the character
 * in rot13 method to stdout
 *
 * @arg: A list of arguments containing the integer to print
 *
 * Return: number of characters printed (int)
 */
int _print_rot_13(va_list arg)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int j;
	char *str;
	int k = 0;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		_puts("(null)");
		return (6);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		k = 0;
		for (j = 0; a[j] != '\0'; j++)
		{
			if (str[i] == a[j])
			{
				k = 1;
				_putchar(b[j]);
				break;
			}
		}

		if (!k)
			_putchar(str[i]);
	}

	return (i);
}
