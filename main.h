#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
void _puts(char *s);
int _printf(const char *format, ...);
int _print_char(va_list arg);
int _print_string(va_list arg);
int _print_number(va_list arg);
int base_check(const char *f);
int _print_invalid_specifier_output(char const *format, int index);

#endif /* MAIN_H */
