#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
 * struct printer - Struct to map format types to printing functions
 * @symbol: The format symbol (c, i, f, s)
 * @print: Pointer to function to print that type
 *
 * Description: Used in print_all to associate a format character
 *              with the correct printing function.
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
