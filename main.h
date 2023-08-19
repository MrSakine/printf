#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
void _puts(char *s);
int _printf(const char *format, ...);
void _print_char(va_list arg);
int _print_string(va_list arg);
int base_check(const char *f);

#endif /* MAIN_H */