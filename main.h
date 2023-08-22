#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

#define BUFFER_SIZE 1024

/**
 * struct printer - A new struct type defining a printer.
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */
typedef struct print
{
    char *symbol;
    int (*p)(va_list args);

} print_t;

int _putchar(char c);
void _puts(char *s);
int _printf(const char *format, ...);
int _print_char(va_list arg);
int _print_string(va_list arg);
int _print_string_ascii(va_list arg);
int _print_number(va_list arg);
int _print_unsigned_number(va_list arg);
int base_check(const char *f);
int _print_invalid_specifier_output(char const *format, int index);
int _print_binary(va_list args);
int _print_octal(va_list args);
int print_hexa_decimal(unsigned int num, int mode);
int _print_hexa_decimal_small(va_list args);
int _print_hexa_decimal_large(va_list args);
void _add_to_buffer(char *buffer, int *buffer_index, const char *data, int data_len);
print_t *get_specifiers(void);

#endif /* MAIN_H */
