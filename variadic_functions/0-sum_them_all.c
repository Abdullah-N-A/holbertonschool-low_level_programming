#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 * @...: Variable number of integer parameters
 *
 * Description: If separator is NULL, no separator is printed.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list nums;
unsigned int index, sum = 0;

va_start(nums, n);

for (index = 0; index < n; index++)
sum += va_arg(nums, int);

va_end(nums);

return (sum);
}
