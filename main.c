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
	void *addr = (void *)0x12345678;

	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	_printf("Unknown:[%R]\n", "hello");
	len = _printf("%R\n", "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher");
	_printf("Len:[%d]\n", len);
	len = _printf("%R\n", "EBG13 (\"ebgngr ol 13 cynprf\", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure");
	_printf("Len:[%d]\n", len);

	return (0);
}
