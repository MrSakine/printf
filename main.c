#include <limits.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;

	_printf("Unknown:[%r]\n", "hello");
	len = _printf("%r\n", "Best School");
	_printf("Len:[%d]\n", len);

	return (0);
}
