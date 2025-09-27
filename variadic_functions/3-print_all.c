#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on format string.
 * @format: String of types of arguments passed
 *
 * Description: Types:
 * c = char, i = int, f = float, s = string
 * If a string is NULL, prints (nil)
 * Ignores unknown types. Prints newline at the end.
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *str;
    char *sep = "";

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == 'c')
            printf("%s%c", sep, va_arg(args, int));
        if (format[i] == 'i')
            printf("%s%d", sep, va_arg(args, int));
        if (format[i] == 'f')
            printf("%s%f", sep, va_arg(args, double));
        if (format[i] == 's')
        {
            str = va_arg(args, char *);
            if (!str)
                str = "(nil)";
            printf("%s%s", sep, str);
        }
        sep = ", ";
        i++;
    }

    va_end(args);
    printf("\n");
}
