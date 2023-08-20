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
	int len2;

	len = _printf("Let's try to printf a simple sentence. %d\n", 1);
	len2 = printf("Let's try to printf a simple sentence. %d\n", 2);
	_printf("Length:[%d, %i]\n", len, len2);
	printf("Length:[%d, %i]\n", len2, len2);
	len = _printf("Unknown: [%r]\n");
	len2 = printf("Unknown: [%r]\n");
	_printf("Length:[%d, %i]\n", len, len2);
	printf("Length:[%d, %i]\n", len2, len2);
	return (0);
}
