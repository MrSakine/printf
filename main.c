#include <limits.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int r;

	r = _printf("Unknown: [%r]\n");
	printf("%d\n", r);
	return (0);
}
