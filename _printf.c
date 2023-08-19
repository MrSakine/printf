#include "main.h"

int _printf(const char *format, ...)
{
        va_list args;
        int i = 0;

        va_start(args, format);

        while (format && (*(format + i)))
        {

                if (*(format + i) == '%')
                {
                        _puts("");
                }

                _putchar(*(format + i));

                i++;
        }

        _putchar('\n');

        va_end(args);

        return (i);
}